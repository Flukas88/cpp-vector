#include <climits>

#pragma once

#include <iostream>
#include <cmath>

namespace Vec {

    template<typename T>
    class Vec3d {

    public:
        __unused Vec3d(T x, T y, T z) : x(x), y(y), z(z) {}

        Vec3d() : x(0), y(0), z(0) {}

        Vec3d(const Vec3d &v) : x(v.x), y(v.y), z(v.z) {}

        Vec3d &operator*=(const T f) {
            x = f * x;
            y = f * y;
            z = f * z;
            return *this;
        }

        Vec3d &operator/=(const Vec3d &v) {
            x = x / v.x;
            y = y / v.y;
            z = z / v.z;
            return *this;
        }

        Vec3d &operator+=(const Vec3d &v) noexcept {
            x = v.x + x;
            y = v.y + y;
            z = v.z + z;
            return *this;
        }

        Vec3d &operator-=(const Vec3d &v) {
            x = x - v.x;
            y = y - v.y;
            z = z - v.z;
            return *this;
        }

        Vec3d operator+(const Vec3d &v) const noexcept {
            Vec3d res;
            res.x = v.x + x;
            res.y = v.y + y;
            res.z = v.z + z;
            return res;
        }

        Vec3d operator-(const Vec3d &v) const {
            Vec3d res;
            res.x = x - v.x;
            res.y = y - v.y;
            res.z = z - v.z;
            return res;
        }

        Vec3d operator*(const Vec3d &r) const {
            Vec3d res;
            res.x = r.x * x;
            res.y = r.y * y;
            res.z = r.z * z;
            return res;
        }

        bool operator!=(const Vec3d &r) const noexcept {
            return (r.x != x) && (r.y != y) && (r.z != z);
        }

        bool operator==(const Vec3d &r) const noexcept {
            return !(operator!=(r));
        }

        const T &operator[](size_t n) const {
            switch (n) {
                case 0:
                    return x;
                case 1:
                    return y;
                case 2:
                    return z;
                default:
                    throw "Index is not x/y/z";
            }
        }

        friend std::ostream &operator<<(std::ostream &os, const Vec3d<T> &v) {
            os << "vector = (" << v.x << "," << v.y << "," << v.z << ")"
               << ", lenght = " << v.lenght();
            return os;
        }

        const inline T lenght() const noexcept {
            return std::sqrt((x * x) + (y * y) + (z * z));
        }

    private:
        T x, y, z;
    };

    // typedefs
    __unused typedef Vec3d<int> IVec3d;
    typedef Vec3d<double> DVec3d;
    __unused  typedef Vec3d<float> FVec3d;

} // namespace Vec
