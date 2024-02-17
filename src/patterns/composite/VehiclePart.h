#ifndef VEHICLE_PART_H
#define VEHICLE_PART_H

#include <boost/multiprecision/cpp_dec_float.hpp>

namespace mp = boost::multiprecision;
using Decimal = mp::number<mp::cpp_dec_float<6>>;

class VehiclePart {
public:
    virtual Decimal getCost() const = 0;
    virtual ~VehiclePart() = default;  // Virtual destructor for proper cleanup
};

#endif // VEHICLE_PART_H
