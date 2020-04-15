#include <Dvec.hpp>
#include <testing.hpp>

using namespace Vec;

int main()
{
    DVec3d v1 = {0.0, 1.6, 2.5}, v2(3.0, 4.7, 1.0),
           v4(v1), expect1(0.0, 7.5, 2.5), expect2(3.0, 6.3, 3.5),
           v3 = (v4 * v2), v5 = (v1 + v2), v6 = (v5 - v2),
           v7, zero_vector, one = {1.0, 1.0, 1.0};
    v7 += v1;
    v7 -= v1;
    DVec3d v8 = v1 /= one;
    std::cout << "v1 # " << v1 << "\nv2 # " << v2 << std::endl;
    if (testVector(expect1, v3))
    {
        std::cout << "All good " << expect1 << " is " << v3 << std::endl;
    }

    if (testVector(expect2, v5))
    {
        std::cout << "All good " << expect2 << " is " << v5 << std::endl;
    }

    if (testVector(v1, v6))
    {
        std::cout << "All good " << v1 << " is " << v6 << std::endl;
    }

    if (testVector(zero_vector, v7))
    {
        std::cout << "All good " << zero_vector << " is " << v7 << std::endl;
    }

    if (testVector(v1, v8))
    {
        std::cout << "All good " << v1 << " is " << v8 << std::endl;
    }
    try
    {
        std::cout << v8[4] << std::endl;
    }
    catch (const char *msg)
    {
        std::clog << "Expected error: " <<  msg << std::endl;
    }

    return 0;
}
