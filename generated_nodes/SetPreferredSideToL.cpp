#include "SetPreferredSideToL.hpp"
#include <iostream>

BT::NodeStatus SetPreferredSideToL::tick()
{
    // No inputs
    std::cout << "[SetPreferredSideToL] Executing tick()...\n";
    return BT::NodeStatus::SUCCESS;
}
