//
//  Point.cpp
//  RayTracerCpp
//
//  Created by 전예찬 on 2022/11/09.
//

#include "Point.hpp"
#include <iostream>

Point::Point(): Tuple(){}

Point::Point(float p_x, float p_y, float p_z) {
    x = p_x;
    y = p_y;
    z = p_z;
    w = 1.0f;
}

std::ostream& operator<<(std::ostream& os, const Point& po)
{
    os << "x: " << po.x << ", " << "y: " << po.y << ", " << "z: " << po.z << ", ";
    return os;
}

bool operator==(const Point& p1, const Point& p2)
{
    if(p1.x == p2.x && p1.y == p2.y && p1.z == p2.z && p1.w == p2.w)
    {
        return true;
    }
    return false;
}
