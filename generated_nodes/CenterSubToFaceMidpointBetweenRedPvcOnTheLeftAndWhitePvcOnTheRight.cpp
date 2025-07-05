#include "CenterSubToFaceMidpointBetweenRedPvcOnTheLeftAndWhitePvcOnTheRight.hpp"
#include <iostream>

BT::NodeStatus CenterSubToFaceMidpointBetweenRedPvcOnTheLeftAndWhitePvcOnTheRight::tick()
{
    // No inputs
    std::cout << "[CenterSubToFaceMidpointBetweenRedPvcOnTheLeftAndWhitePvcOnTheRight] Executing tick()...\n";
    return BT::NodeStatus::SUCCESS;
}
