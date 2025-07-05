#include "MoveAndPlaceTrashInCorrespondingBasket.hpp"
#include <iostream>

BT::NodeStatus MoveAndPlaceTrashInCorrespondingBasket::tick()
{
    // No inputs
    std::cout << "[MoveAndPlaceTrashInCorrespondingBasket] Executing tick()...\n";
    return BT::NodeStatus::SUCCESS;
}
