//
//  Tuple.cpp
//  RayTracerCpp
//
//  Created by 전예찬 on 2022/11/09.
//

#include "Tuple.hpp"
#include <iostream>

Tuple::Tuple()
{
    x = 0.0f;
    y = 0.0f;
    z = 0.0f;
    w = 1.0f;
}

Tuple::Tuple(float x, float y, float z, float w) : x(x), y(y), z(z), w(w) {}

std::ostream& operator<<(std::ostream& os, const Tuple& tup)
{
    os << "x: " << tup.x << ", " << "y: " << tup.y << ", " << "z: " << tup.z << ", ";
    return os;
}

bool operator==(const Tuple& tup1, const Tuple& tup2)
{
    if(tup1.x == tup2.x && tup1.y == tup2.y && tup1.z == tup2.z && tup1.w == tup2.w)
    {
        return true;
    }
    return false;
}

Tuple operator+(const Tuple& tup1, const Tuple& tup2)
{
    return Tuple(tup1.x + tup2.x, tup1.y + tup2.y, tup1.z + tup2.z, tup1.w + tup2.w);
}
