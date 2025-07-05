#include "MoveBackFacingInitialDirection.hpp"
#include <iostream>

BT::NodeStatus MoveBackFacingInitialDirection::tick()
{
    // No inputs
    std::cout << "[MoveBackFacingInitialDirection] Executing tick()...\n";
    return BT::NodeStatus::SUCCESS;
}
