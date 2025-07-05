#pragma once
#include <behaviortree_cpp_v3/action_node.h>

class SetPreferredSideToL : public BT::SyncActionNode
{
public:
    SetPreferredSideToL(const std::string& name, const BT::NodeConfiguration& config)
        : BT::SyncActionNode(name, config) {}

    static BT::PortsList providedPorts()
    {
        return {
            BT::OutputPort<std::string>("preferred_side")
        };
    }

    BT::NodeStatus tick() override;
};
