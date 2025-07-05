#include "TurnRight180Deg.hpp"
#include <iostream>

BT::NodeStatus TurnRight180Deg::tick()
{
    // No inputs
    std::cout << "[TurnRight180Deg] Executing tick()...\n";
    return BT::NodeStatus::SUCCESS;
}
