//
// Created by Mindaugas K on 7/28/2019.
//

#ifndef SHAPE_POLYMORPHIC_TRIANGLE_H
#define SHAPE_POLYMORPHIC_TRIANGLE_H

#include "Shape.h"
#include "Point.h"

class Triangle: public Shape {
private:
   Point m_p1;
   Point m_p2;
   Point m_p3;
public:
    Triangle(const Point& p1, const Point& p2, const Point& p3)
        :m_p1{p1},m_p2{p2},m_p3{p3}
    {}
    std::ostream& print(std::ostream& out) const override;
    ~Triangle() override = default;
};


#endif //SHAPE_POLYMORPHIC_TRIANGLE_H
