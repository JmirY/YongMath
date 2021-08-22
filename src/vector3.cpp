#include <vector3.h>
#include <iostream>
#include <cmath>

using namespace math;

void Vector3::normalize() noexcept
{
    float mag = magnitude();
    if (mag != 0.0f)
    {
        float magInverse = 1.0f / mag;
        x *= magInverse;
        y *= magInverse;
        z *= magInverse;
    }
}

float Vector3::magnitude() const noexcept
{
    float sum = x*x + y*y + z*z;
    return sqrt(sum);
}

float Vector3::magnitudeSquared() const noexcept
{
    return x*x + y*y + z*z;
}

float Vector3::dot(const Vector3& other) const noexcept
{
    return x*other.x + y*other.y + z*other.z;
}

Vector3 Vector3::cross(const Vector3& other) const noexcept
{
    return Vector3(
        y*other.z - z*other.y,
        -x*other.z + z*other.x,
        x*other.y - y*other.x
    );
}

void Vector3::reset(const float value) noexcept
{
    x = y = z = value;
}

void Vector3::print() const noexcept
{
    std::cout << "[ " << x << ", " << y << ", " << z << " ]\n";
}

Vector3 Vector3::operator+(const Vector3& other) const noexcept
{
    return Vector3(x + other.x, y + other.y, z + other.z);
}

void Vector3::operator+=(const Vector3& other) noexcept
{
    x += other.x;
    y += other.y;
    z += other.z;
}

Vector3 Vector3::operator-(const Vector3& other) const noexcept
{
    return Vector3(x - other.x, y - other.y, z - other.z);
}

void Vector3::operator-=(const Vector3& other) noexcept
{
    x -= other.x;
    y -= other.y;
    z -= other.z;
}

Vector3 Vector3::operator*(const float value) const noexcept
{
    return Vector3(x * value, y * value, z * value);
}

void Vector3::operator*=(const float value) noexcept
{
    x *= value;
    y *= value;
    z *= value;
}

const float Vector3::operator[](unsigned int idx) const
{
    if (idx > 2)
        throw std::out_of_range("Vector3::Index must be smaller than 3");
    
    switch (idx)
    {
    case 0:
        return x;
    case 1:
        return y;
    case 2:
        return z;
    default:
        return 0.0f;
    }
}
