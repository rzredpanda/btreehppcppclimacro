#include "Resurface.hpp"
#include <iostream>

BT::NodeStatus Resurface::tick()
{
    // No inputs
    std::cout << "[Resurface] Executing tick()...\n";
    return BT::NodeStatus::SUCCESS;
}
