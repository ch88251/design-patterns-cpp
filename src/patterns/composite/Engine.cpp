#include "Engine.h"

Engine::Engine(Decimal cost) : cost(cost) {}

Decimal Engine::getCost() const {
    return cost;
}
