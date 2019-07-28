//
// Created by Mindaugas K on 7/28/2019.
//

#include "Shape.h"
std::ostream& operator<<(std::ostream& out, const Shape& s)
{
    return s.print(out);
}