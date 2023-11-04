#ifndef ENGINE_H
#define ENGINE_H

#include "VehiclePart.h"

class Engine : public VehiclePart {
private:
    double cost;

public:
    Engine(double cost);
    double getCost() const override;
};

#endif // ENGINE_H
