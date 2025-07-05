#include "DetectGateAtFrontOfSub.hpp"
#include <iostream>

BT::NodeStatus DetectGateAtFrontOfSub::tick()
{
    // No inputs
    std::cout << "[DetectGateAtFrontOfSub] Executing tick()...\n";
    return BT::NodeStatus::SUCCESS;
}
