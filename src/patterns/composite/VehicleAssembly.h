#ifndef VEHICLE_ASSEMBLY_H
#define VEHICLE_ASSEMBLY_H

#include "VehiclePart.h"
#include <vector>

class VehicleAssembly : public VehiclePart {
private:
    std::vector<VehiclePart*> parts;

public:
    void addPart(VehiclePart* part);
    void removePart(VehiclePart* part);  // If needed
    Decimal getCost() const override;
};

#endif // VEHICLE_ASSEMBLY_H
