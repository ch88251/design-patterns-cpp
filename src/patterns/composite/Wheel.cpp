#include "Wheel.h"


Wheel::Wheel(Decimal cost) : cost(cost) {}

Decimal Wheel::getCost() const {
    return cost;
}
