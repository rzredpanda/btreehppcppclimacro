#!/usr/bin/env python3
import os
import sys

header_template = '''#pragma once
#include <behaviortree_cpp_v3/action_node.h>

class {classname} : public BT::SyncActionNode
{{
public:
    {classname}(const std::string& name, const BT::NodeConfiguration& config)
        : BT::SyncActionNode(name, config) {{}}

    static BT::PortsList providedPorts()
    {{
        return {{
{ports}
        }};
    }}

    BT::NodeStatus tick() override;
}};
'''

source_template = '''#include "{classname}.hpp"
#include <iostream>

BT::NodeStatus {classname}::tick()
{{
{inputs}
    std::cout << "[{classname}] Running node\\n";
    return BT::NodeStatus::SUCCESS;
}}
'''

def generate_node(classname, port_names):
    # Prepare filenames
    hpp_file = f"{classname}.hpp"
    cpp_file = f"{classname}.cpp"

    # Format ports
    port_lines = []
    input_lines = []
    for p in port_names:
        port_lines.append(f'            BT::InputPort<std::string>("{p}")')
        input_lines.append(f'    auto {p} = getInput<std::string>("{p}").value();')

    ports_str = ",\n".join(port_lines)
    inputs_str = "\n".join(input_lines)

    # Fill in the templates
    hpp_content = header_template.format(classname=classname, ports=ports_str)
    cpp_content = source_template.format(classname=classname, inputs=inputs_str)

    # Write files
    with open(hpp_file, 'w') as f:
        f.write(hpp_content)
    with open(cpp_file, 'w') as f:
        f.write(cpp_content)

    print(f"✅ Generated {hpp_file} and {cpp_file}")

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Usage: bt_make_node <NodeName> [port1 port2 ...]")
        sys.exit(1)

    classname = sys.argv[1]
    ports = sys.argv[2:]
    generate_node(classname, ports)
