#ifndef WHEEL_H
#define WHEEL_H

#include "VehiclePart.h"

class Wheel : public VehiclePart {
private:
    double cost;

public:
    Wheel(double cost);
    double getCost() const override;
};

#endif // WHEEL_H
