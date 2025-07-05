#include "SetPreferredSideToR.hpp"
#include <iostream>

BT::NodeStatus SetPreferredSideToR::tick()
{
    // No inputs
    std::cout << "[SetPreferredSideToR] Executing tick()...\n";
    return BT::NodeStatus::SUCCESS;
}
