//
//  Vector.cpp
//  RayTracerCpp
//
//  Created by 전예찬 on 2022/11/09.
//

#include "Vector.hpp"
#include <iostream>

Vector::Vector() : Tuple()
{
    w = 0.0f;
}

Vector::Vector(float c_x, float c_y, float c_z)
{
    x = c_x;
    y = c_y;
    z = c_z;
    w = 0.0f;
}

std::ostream& operator<<(std::ostream& os, const Vector& vec)
{
    os << "x: " << vec.x << ", " << "y: " << vec.y << ", " << "z: " << vec.z << ", ";
    return os;
}

bool operator==(const Vector& v1, const Vector& v2)
{
    if(v1.x == v2.x && v1.y == v2.y && v1.z == v2.z && v1.w == v2.w)
    {
        return true;
    }
    return false;
}
