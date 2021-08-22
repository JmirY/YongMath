#include <quaternion.h>
#include <cmath>

using namespace math;

float Quaternion::magnitude() const noexcept
{
    return sqrt(w*w + x*x + y*y + z*z);
}

void Quaternion::normalize() noexcept
{
    float mag = magnitude();
    // Reset this quaternion if magnitude is zero
    if (mag == 0.0f)
    {
        w = 1.0f;
        return;
    }
    mag = 1.0f / mag;

    w *= mag;
    x *= mag;
    y *= mag;
    z *= mag;
}

Quaternion Quaternion::rotateByVector(const Vector3& vec) const noexcept
{
    return *this * Quaternion(0.0f, vec.x, vec.y, vec.z);
}

Quaternion Quaternion::operator+(const Quaternion& other) const noexcept
{
    Quaternion result;

    result += other;

    return result;
}

void Quaternion::operator+=(const Quaternion& other) noexcept
{
    w += other.w;
    x += other.x;
    y += other.y;
    z += other.z;
}

Quaternion Quaternion::operator-(const Quaternion& other) const noexcept
{
    Quaternion result;

    result -= other;

    return result;
}

void Quaternion::operator-=(const Quaternion& other) noexcept
{
    w -= other.w;
    x -= other.x;
    y -= other.y;
    z -= other.z;
}

Quaternion Quaternion::operator*(const Quaternion& other) const noexcept
{
    Quaternion result;
    
    result *= other;

    return result;
}

void Quaternion::operator*=(const Quaternion& other) noexcept
{
    Quaternion result;
    
    result.w = w*other.w - x*other.x - y*other.y - z*other.z;
    result.x = w*other.x + x*other.w + y*other.z - z*other.y;
    result.y = w*other.y - x*other.z + y*other.w + z*other.x;
    result.z = w*other.z + x*other.y - y*other.x + z*other.w;

    *this = result;
}

Quaternion Quaternion::operator*(const float value) const noexcept
{
    Quaternion result;

    result *= value;

    return result;
}

void Quaternion::operator*=(const float value) noexcept
{
    w *= value;
    x *= value;
    y *= value;
    z *= value;
}
