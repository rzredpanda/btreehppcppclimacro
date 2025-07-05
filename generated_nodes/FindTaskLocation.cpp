#include "FindTaskLocation.hpp"
#include <iostream>

BT::NodeStatus FindTaskLocation::tick()
{
    // No inputs
    std::cout << "[FindTaskLocation] Executing tick()...\n";
    return BT::NodeStatus::SUCCESS;
}
