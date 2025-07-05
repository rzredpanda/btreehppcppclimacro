#include "PreferredSideIsL.hpp"
#include <iostream>

BT::NodeStatus PreferredSideIsL::tick()
{
    auto preferred_side = getInput<std::string>("preferred_side").value();
    std::cout << "[PreferredSideIsL] Executing tick()...\n";
    return BT::NodeStatus::SUCCESS;
}
