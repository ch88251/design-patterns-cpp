#ifndef CHASSIS_H
#define CHASSIS_H

#include "VehiclePart.h"

class Chassis : public VehiclePart {
private:
    double cost;

public:
    Chassis(double cost);
    double getCost() const override;
};

#endif // CHASSIS_H
