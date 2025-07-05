#include "CenterSubToFaceMidpointBetweenWhitePvcOnTheLeftAndRedPvcOnTheRight.hpp"
#include <iostream>

BT::NodeStatus CenterSubToFaceMidpointBetweenWhitePvcOnTheLeftAndRedPvcOnTheRight::tick()
{
    // No inputs
    std::cout << "[CenterSubToFaceMidpointBetweenWhitePvcOnTheLeftAndRedPvcOnTheRight] Executing tick()...\n";
    return BT::NodeStatus::SUCCESS;
}
