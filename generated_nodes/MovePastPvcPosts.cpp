#include "MovePastPvcPosts.hpp"
#include <iostream>

BT::NodeStatus MovePastPvcPosts::tick()
{
    // No inputs
    std::cout << "[MovePastPvcPosts] Executing tick()...\n";
    return BT::NodeStatus::SUCCESS;
}
