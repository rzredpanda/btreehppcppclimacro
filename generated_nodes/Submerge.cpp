#include "Submerge.hpp"
#include <iostream>

BT::NodeStatus Submerge::tick()
{
    // No inputs
    std::cout << "[Submerge] Executing tick()...\n";
    return BT::NodeStatus::SUCCESS;
}
