#pragma once
#include "Dvec.hpp"

namespace Vec
{
    template<typename T>
    bool testVector(T &expected, T &actual)
    {
        return !(expected != actual);
    }

} // namespace Vec