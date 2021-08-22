// 4 X 4 Matrix class
// By JmirY

#ifndef MATRIX4_H_
#define MATRIX4_H_

#include "vector3.h"

namespace math
{
    class Matrix4
    {
    public:
        // Data is stored as row-wise format
        float entries[16];

        // Constructor

        // Initialize matrix as identity matrix
        Matrix4() noexcept;
        // Initialize matrix whose diagonal entries are given value
        Matrix4(float value) noexcept;
        Matrix4(float v1, float v2, float v3, float v4) noexcept;

        // Set diagonal entries to given value
        void setDiagonal(float value) noexcept;

        // Return transposed matrix
        Matrix4 transpose() const noexcept;

        // Return inversed matrix
        Matrix4 inverse() const;

        // Print this matrix
        void print() const noexcept;

        // Operator overloading

        Matrix4 operator+(const Matrix4& other) const noexcept;
        void operator+=(const Matrix4& other) noexcept;

        Matrix4 operator-(const Matrix4& other) const noexcept;
        void operator-=(const Matrix4& other) noexcept;

        Matrix4 operator*(const Matrix4& other) const noexcept;
        void operator*=(const Matrix4& other) noexcept;

        Vector3 operator*(const Vector3& vec) const noexcept;

        Matrix4 operator*(const float value) const noexcept;
        void operator*=(const float value) noexcept;

        Matrix4& operator=(const Matrix4& other) noexcept;
    };
} // namespace math

#endif // MATRIX4_H_
