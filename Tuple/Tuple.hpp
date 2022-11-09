//
//  Tuple.h
//  RayTracerCpp
//
//  Created by 전예찬 on 2022/11/09.
//

#ifndef Tuple_h
#define Tuple_h

#include <iostream>

class Tuple
{
protected:
    //Left-handed coordinate
    //w: 0 for Point, 1 for Vector
    float x,y,z,w;
    
public:
    
    Tuple();
    Tuple(float x, float y, float z, float w);

    friend std::ostream& operator<<(std::ostream& os, const Tuple& tup);
    friend bool operator==(const Tuple& tup1, const Tuple& tup2);
    friend Tuple operator+(const Tuple& tup1, const Tuple& tup2);
};

#endif /* Tuple_h */
