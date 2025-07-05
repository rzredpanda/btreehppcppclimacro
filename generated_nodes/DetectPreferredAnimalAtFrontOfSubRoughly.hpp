#pragma once
#include <behaviortree_cpp_v3/condition_node.h>

class DetectPreferredAnimalAtFrontOfSubRoughly : public BT::ConditionNode
{
public:
    DetectPreferredAnimalAtFrontOfSubRoughly(const std::string& name, const BT::NodeConfiguration& config)
        : BT::ConditionNode(name, config) {}

    static BT::PortsList providedPorts()
    {
        return {
            // No ports
        };
    }

    BT::NodeStatus tick() override;
};
