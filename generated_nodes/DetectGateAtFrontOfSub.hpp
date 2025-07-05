#pragma once
#include <behaviortree_cpp_v3/condition_node.h>

class DetectGateAtFrontOfSub : public BT::ConditionNode
{
public:
    DetectGateAtFrontOfSub(const std::string& name, const BT::NodeConfiguration& config)
        : BT::ConditionNode(name, config) {}

    static BT::PortsList providedPorts()
    {
        return {
            // No ports
        };
    }

    BT::NodeStatus tick() override;
};
