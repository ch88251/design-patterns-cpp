// Chassis.cpp
#include "Chassis.h"

Chassis::Chassis(Decimal cost) : cost(cost) {}

Decimal Chassis::getCost() const {
    return cost;
}
