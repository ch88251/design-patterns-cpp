#ifndef VEHICLE_PART_H
#define VEHICLE_PART_H

class VehiclePart {
public:
    virtual double getCost() const = 0;
    virtual ~VehiclePart() = default;  // Virtual destructor for proper cleanup
};

#endif // VEHICLE_PART_H
