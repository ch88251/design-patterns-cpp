#include "Engine.h"

Engine::Engine(double cost) : cost(cost) {}

double Engine::getCost() const {
    return cost;
}
