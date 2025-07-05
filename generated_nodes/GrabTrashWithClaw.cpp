#include "GrabTrashWithClaw.hpp"
#include <iostream>

BT::NodeStatus GrabTrashWithClaw::tick()
{
    // No inputs
    std::cout << "[GrabTrashWithClaw] Executing tick()...\n";
    return BT::NodeStatus::SUCCESS;
}
