// Quaternion class
// By JmirY

#ifndef QUATERNION_H_
#define QUATERNION_H_

#include "vector3.h"

namespace math
{
    // Only unit quaternion can represent orientation
    struct Quaternion
    {
        float w;
        float x;
        float y;
        float z;

        // Constructor
        Quaternion(float _w = 1.0f, float _x = 0.0f, float _y = 0.0f, float _z = 0.0f) noexcept
            : w(_w), x(_x), y(_y), z(_z) {}

        // Return magnitude of this quaternion
        float magnitude() const noexcept;
    
        // Normalize this quaternion
        void normalize() noexcept;

        // Return quaternion rotated by given vector (which representing rotation)
        Quaternion rotateByVector(const Vector3& vec) const noexcept;

        // Operator overloading

        Quaternion operator+(const Quaternion& other) const noexcept;
        void operator+=(const Quaternion& other) noexcept;

        Quaternion operator-(const Quaternion& other) const noexcept;
        void operator-=(const Quaternion& other) noexcept;

        Quaternion operator*(const Quaternion& other) const noexcept;
        void operator*=(const Quaternion& other) noexcept;

        Quaternion operator*(const float value) const noexcept;
        void operator*=(const float value) noexcept;
    };
} // namespace math

#endif // QUATERNION_H_
