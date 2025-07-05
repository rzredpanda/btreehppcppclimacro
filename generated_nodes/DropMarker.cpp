#include "DropMarker.hpp"
#include <iostream>

BT::NodeStatus DropMarker::tick()
{
    // No inputs
    std::cout << "[DropMarker] Executing tick()...\n";
    return BT::NodeStatus::SUCCESS;
}
