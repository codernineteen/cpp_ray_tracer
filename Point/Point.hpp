//
//  Point.hpp
//  RayTracerCpp
//
//  Created by 전예찬 on 2022/11/09.
//

#ifndef Point_hpp
#define Point_hpp

#include "Tuple.hpp"

class Point: public Tuple
{
public:
    Point();
    
    Point(float p_x, float p_y, float p_z);
    
    friend std::ostream& operator<<(std::ostream& os, const Point& po);
    friend bool operator==(const Point& p1, const Point& p2);
};


#endif /* Point_hpp */
