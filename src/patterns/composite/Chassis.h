#ifndef CHASSIS_H
#define CHASSIS_H

#include <boost/multiprecision/cpp_dec_float.hpp>

namespace mp = boost::multiprecision;
using Decimal = mp::number<mp::cpp_dec_float<6>>;

#include "VehiclePart.h"

class Chassis : public VehiclePart {
private:
    Decimal cost;

public:
    Chassis(Decimal cost);
    Decimal getCost() const override;
};

#endif // CHASSIS_H
