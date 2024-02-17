#ifndef WHEEL_H
#define WHEEL_H

#include <boost/multiprecision/cpp_dec_float.hpp>

namespace mp = boost::multiprecision;
using Decimal = mp::number<mp::cpp_dec_float<6>>;

#include "VehiclePart.h"

class Wheel : public VehiclePart {
private:
    Decimal cost;

public:
    Wheel(Decimal cost);
    Decimal getCost() const override;
};

#endif // WHEEL_H
