#pragma once
#include "Dvec.hpp"

namespace Vec
{

    bool testVector(DVec3d &expected, DVec3d &actual)
    {
        return !(expected != actual);
    }

} // namespace Vec