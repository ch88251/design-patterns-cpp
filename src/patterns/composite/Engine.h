#ifndef ENGINE_H
#define ENGINE_H

#include <boost/multiprecision/cpp_dec_float.hpp>

namespace mp = boost::multiprecision;
using Decimal = mp::number<mp::cpp_dec_float<6>>;

#include "VehiclePart.h"

class Engine : public VehiclePart {
private:
    Decimal cost;

public:
    Engine(Decimal cost);
    Decimal getCost() const override;
};

#endif // ENGINE_H
