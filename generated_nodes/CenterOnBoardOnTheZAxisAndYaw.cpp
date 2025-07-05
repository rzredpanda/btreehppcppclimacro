#include "CenterOnBoardOnTheZAxisAndYaw.hpp"
#include <iostream>

BT::NodeStatus CenterOnBoardOnTheZAxisAndYaw::tick()
{
    // No inputs
    std::cout << "[CenterOnBoardOnTheZAxisAndYaw] Executing tick()...\n";
    return BT::NodeStatus::SUCCESS;
}
