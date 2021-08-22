// 3 X 3 Matrix class
// By JmirY

#ifndef MATRIX3_H_
#define MATRIX3_H_

#include "vector3.h"

namespace math
{
    class Matrix3
    {
    public:
        // Data is stored as row-wise format
        float entries[9];

        // Constructor

        // Initialize matrix as identity matrix
        Matrix3() noexcept;
        // Initialize matrix whose diagonal entries are given value
        Matrix3(float value) noexcept;
        Matrix3(float v1, float v2, float v3) noexcept;

        // Set diagonal entries to given value
        void setDiagonal(float value) noexcept;

        // Return transposed matrix
        Matrix3 transpose() const noexcept;

        // Return inversed matrix
        Matrix3 inverse() const;

        // Print this matrix
        void print() const noexcept;

        // Operator overloading

        Matrix3 operator+(const Matrix3& other) const noexcept;
        void operator+=(const Matrix3& other) noexcept;

        Matrix3 operator-(const Matrix3& other) const noexcept;
        void operator-=(const Matrix3& other) noexcept;

        Matrix3 operator*(const Matrix3& other) const noexcept;
        void operator*=(const Matrix3& other) noexcept;

        Vector3 operator*(const Vector3& vec) const noexcept;

        Matrix3 operator*(const float value) const noexcept;
        void operator*=(const float value) noexcept;

        Matrix3& operator=(const Matrix3& other) noexcept;
    };    
} // namespace math

#endif // MATRIX3_H_
