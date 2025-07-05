#pragma once
#include <behaviortree_cpp_v3/condition_node.h>

class DetectPreferredAnimalLeftOfCenter : public BT::ConditionNode
{
public:
    DetectPreferredAnimalLeftOfCenter(const std::string& name, const BT::NodeConfiguration& config)
        : BT::ConditionNode(name, config) {}

    static BT::PortsList providedPorts()
    {
        return {
            BT::InputPort<std::string>("preferred_animal")
        };
    }

    BT::NodeStatus tick() override;
};
