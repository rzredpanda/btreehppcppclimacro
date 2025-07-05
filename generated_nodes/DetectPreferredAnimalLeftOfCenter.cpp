#include "DetectPreferredAnimalLeftOfCenter.hpp"
#include <iostream>

BT::NodeStatus DetectPreferredAnimalLeftOfCenter::tick()
{
    auto preferred_animal = getInput<std::string>("preferred_animal").value();
    std::cout << "[DetectPreferredAnimalLeftOfCenter] Executing tick()...\n";
    return BT::NodeStatus::SUCCESS;
}
