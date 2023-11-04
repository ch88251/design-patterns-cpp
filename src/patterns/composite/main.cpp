#include <iostream>
#include "Engine.h"
#include "Wheel.h"
#include "Chassis.h"
#include "VehicleAssembly.h"

int main() {
    // Create leaf objects with costs
    Engine engine(1000.0);
    Wheel wheel1(50.0);
    Wheel wheel2(50.0);
    Chassis chassis(500.0);

    // Create composite object
    VehicleAssembly vehicleAssembly;

    // Add leaf objects to the composite
    vehicleAssembly.addPart(&engine);
    vehicleAssembly.addPart(&wheel1);
    vehicleAssembly.addPart(&wheel2);
    vehicleAssembly.addPart(&chassis);

    // Calculate and print the total cost of the vehicle assembly
    std::cout << "Total cost of the vehicle assembly: $" << vehicleAssembly.getCost() << std::endl;

    return 0;
}
