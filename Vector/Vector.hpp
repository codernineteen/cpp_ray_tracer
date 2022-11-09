//
//  Vector.hpp
//  RayTracerCpp
//
//  Created by 전예찬 on 2022/11/09.
//

#ifndef Vector_hpp
#define Vector_hpp

#include "Tuple.hpp"

class Vector : public Tuple
{
public:
    Vector();

    Vector(float c_x, float c_y, float c_z);
    
    friend std::ostream& operator<<(std::ostream& os, const Vector& tup);
    friend bool operator==(const Vector& v1, const Vector& v2);
};

#endif /* Vector_hpp */
