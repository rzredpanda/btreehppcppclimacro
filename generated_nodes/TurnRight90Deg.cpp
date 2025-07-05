#include "TurnRight90Deg.hpp"
#include <iostream>

BT::NodeStatus TurnRight90Deg::tick()
{
    // No inputs
    std::cout << "[TurnRight90Deg] Executing tick()...\n";
    return BT::NodeStatus::SUCCESS;
}
