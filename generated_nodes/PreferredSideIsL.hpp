#pragma once
#include <behaviortree_cpp_v3/condition_node.h>

class PreferredSideIsL : public BT::ConditionNode
{
public:
    PreferredSideIsL(const std::string& name, const BT::NodeConfiguration& config)
        : BT::ConditionNode(name, config) {}

    static BT::PortsList providedPorts()
    {
        return {
            BT::InputPort<std::string>("preferred_side")
        };
    }

    BT::NodeStatus tick() override;
};
