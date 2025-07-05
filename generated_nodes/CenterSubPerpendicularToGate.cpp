#include "CenterSubPerpendicularToGate.hpp"
#include <iostream>

BT::NodeStatus CenterSubPerpendicularToGate::tick()
{
    // No inputs
    std::cout << "[CenterSubPerpendicularToGate] Executing tick()...\n";
    return BT::NodeStatus::SUCCESS;
}
