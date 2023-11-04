#include "VehicleAssembly.h"

void VehicleAssembly::addPart(VehiclePart* part) {
    parts.push_back(part);
}

void VehicleAssembly::removePart(VehiclePart* part) {
    // Implementation of removal is omitted for simplicity
}

double VehicleAssembly::getCost() const {
    double totalCost = 0;
    for (const auto& part : parts) {
        totalCost += part->getCost();
    }
    return totalCost;
}
