#!/usr/bin/env python3
import xml.etree.ElementTree as ET
from pathlib import Path
import sys

HEADER_TEMPLATE = '''#pragma once
#include <behaviortree_cpp_v3/{base_header}.h>

class {classname} : public BT::{base_class}
{{
public:
    {classname}(const std::string& name, const BT::NodeConfiguration& config)
        : BT::{base_class}(name, config) {{}}

    static BT::PortsList providedPorts()
    {{
        return {{
{ports}
        }};
    }}

    BT::NodeStatus tick() override;
}};
'''

SOURCE_TEMPLATE = '''#include "{classname}.hpp"
#include <iostream>

BT::NodeStatus {classname}::tick()
{{
{inputs}
    std::cout << "[{classname}] Executing tick()...\\n";
    return BT::NodeStatus::SUCCESS;
}}
'''

def to_classname(id_str):
    return ''.join([w.capitalize() for w in id_str.split('_')])

def format_port_line(name, direction):
    return f'            BT::{direction}Port<std::string>("{name}")'

def format_input_line(name):
    return f'    auto {name} = getInput<std::string>("{name}").value();'

def main(xml_path):
    tree = ET.parse(xml_path)
    root = tree.getroot()
    model = root.find('TreeNodesModel')

    if model is None:
        print("No <TreeNodesModel> found in XML.")
        return

    out_dir = Path("generated_nodes")
    out_dir.mkdir(exist_ok=True)

    for node in model:
        node_type = node.tag  # Action or Condition
        node_id = node.attrib["ID"]
        classname = to_classname(node_id)

        base_class = "SyncActionNode" if node_type == "Action" else "ConditionNode"
        base_header = "action_node" if node_type == "Action" else "condition_node"

        ports = []
        input_lines = []

        for port in node.findall("input_port"):
            name = port.attrib["name"]
            ports.append(format_port_line(name, "Input"))
            input_lines.append(format_input_line(name))
        for port in node.findall("output_port"):
            name = port.attrib["name"]
            ports.append(format_port_line(name, "Output"))

        ports_str = ",\n".join(ports) if ports else "            // No ports"
        input_str = "\n".join(input_lines) if input_lines else "    // No inputs"

        hpp = HEADER_TEMPLATE.format(classname=classname, base_class=base_class,
                                     base_header=base_header, ports=ports_str)
        cpp = SOURCE_TEMPLATE.format(classname=classname, inputs=input_str)

        (out_dir / f"{classname}.hpp").write_text(hpp)
        (out_dir / f"{classname}.cpp").write_text(cpp)

        print(f"✅ Generated {classname}.hpp/.cpp")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: bt_generate_nodes_from_xml.py path/to/tree.xml")
    else:
        main(sys.argv[1])
