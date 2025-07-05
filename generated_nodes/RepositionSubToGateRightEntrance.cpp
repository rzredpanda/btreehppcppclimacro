#include "RepositionSubToGateRightEntrance.hpp"
#include <iostream>

BT::NodeStatus RepositionSubToGateRightEntrance::tick()
{
    // No inputs
    std::cout << "[RepositionSubToGateRightEntrance] Executing tick()...\n";
    return BT::NodeStatus::SUCCESS;
}
