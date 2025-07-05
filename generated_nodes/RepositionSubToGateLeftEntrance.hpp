#pragma once
#include <behaviortree_cpp_v3/action_node.h>

class RepositionSubToGateLeftEntrance : public BT::SyncActionNode
{
public:
    RepositionSubToGateLeftEntrance(const std::string& name, const BT::NodeConfiguration& config)
        : BT::SyncActionNode(name, config) {}

    static BT::PortsList providedPorts()
    {
        return {
            // No ports
        };
    }

    BT::NodeStatus tick() override;
};
