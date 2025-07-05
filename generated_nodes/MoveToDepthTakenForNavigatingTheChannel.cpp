#include "MoveToDepthTakenForNavigatingTheChannel.hpp"
#include <iostream>

BT::NodeStatus MoveToDepthTakenForNavigatingTheChannel::tick()
{
    // No inputs
    std::cout << "[MoveToDepthTakenForNavigatingTheChannel] Executing tick()...\n";
    return BT::NodeStatus::SUCCESS;
}
