//
// Created by Mindaugas K on 7/28/2019.
//

#ifndef SHAPE_POLYMORPHIC_SHAPE_H
#define SHAPE_POLYMORPHIC_SHAPE_H

#include <iostream>

class Shape {
public:
   virtual std::ostream& print(std::ostream& out) const =0;
   friend std::ostream& operator<<(std::ostream& out, const Shape& s);
   virtual ~Shape()= default;
};


#endif //SHAPE_POLYMORPHIC_SHAPE_H
