#include "RepositionSubToGateLeftEntrance.hpp"
#include <iostream>

BT::NodeStatus RepositionSubToGateLeftEntrance::tick()
{
    // No inputs
    std::cout << "[RepositionSubToGateLeftEntrance] Executing tick()...\n";
    return BT::NodeStatus::SUCCESS;
}
