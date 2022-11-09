//
//  main.cpp
//  RayTracerCpp
//
//  Created by 전예찬 on 2022/11/09.
//
#include "Tuple.hpp"
#include "Point.hpp"
#include "Vector.hpp"
#include <iostream>

int main() {
    
    Tuple tup1 = Tuple(1.0f, 2.0f, 3.0f, 0.0f);
    Tuple tup2 = Tuple(1.0f, 2.0f, 3.0f, 0.0f);
    Point p1 = Point(1.0f, 2.0f, 3.0f);
    Vector v1 = Vector(1.0f, 2.0f, 3.0f);
    
    std::cout << tup1 << std::endl;
    std::cout << p1 << std::endl;
    std::cout << v1 << std::endl;
    std::cout << (tup1 + tup2) << std::endl;
    
    
    return 0;
}
