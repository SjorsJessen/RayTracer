#ifndef VECTOR_HPP_
#define VECTOR_HPP_

#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <vector>

namespace Raytracer
{
    template<typename T>
    class Vector
    {
        private:      
            T xPosition, yPosition, zPosition;
        
        public:
            Vector(T n):
                xPosition(n), yPosition(n), zPosition(n){}

            Vector(T x, T y, T z):
                xPosition(x), yPosition(y), zPosition(z){}
            
            T GetX() const { return xPosition; }
            T GetY() const { return yPosition; }
            T GetZ() const { return zPosition; }

            
            /*-- Vector Operators --*/
            

    };
     
}


#endif /* VECTOR_HPP_ */