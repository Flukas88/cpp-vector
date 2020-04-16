#pragma once
#include "Dvec.hpp"

namespace Vec
{
    template<typename T>
    bool testVector(const T &expected, const T &actual)
    {
        return (expected == actual);
    }

} // namespace Vec
