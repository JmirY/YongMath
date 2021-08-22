// 3D Vector class
// By JmirY

#ifndef VECTOR3_H_
#define VECTOR3_H_

namespace math
{
    class Vector3
    {
    public:
        float x;
        float y;
        float z;

        // Constructor
        Vector3(float _x = 0.0f, float _y = 0.0f, float _z = 0.0f) noexcept
            : x(_x), y(_y), z(_z) {}

        // Normalize this vector
        void normalize() noexcept;

        // Return magnitude of this vector
        float magnitude() const noexcept;
        // Return magnitude squared
        float magnitudeSquared() const noexcept;

        // Return dot product of this vector and parameter
        float dot(const Vector3& other) const noexcept;

        // Return cross product of this vector and parameter
        Vector3 cross(const Vector3& other) const noexcept;

        // Reset this vector by given value
        void reset(const float value = 0.0f) noexcept;

        // Print this vector to standard output
        void print() const noexcept;

        // Operator overloading

        Vector3 operator+(const Vector3& other) const noexcept;
        void operator+=(const Vector3& other) noexcept;

        Vector3 operator-(const Vector3& other) const noexcept;
        void operator-=(const Vector3& other) noexcept;

        Vector3 operator*(const float value) const noexcept;
        void operator*=(const float value) noexcept;

        const float operator[](unsigned int idx) const;
    };
} // namespace math

#endif // VECTOR3_H_
