//
// Created by Mindaugas K on 7/28/2019.
//

#ifndef SHAPE_POLYMORPHIC_CIRCLE_H
#define SHAPE_POLYMORPHIC_CIRCLE_H

#include "Shape.h"
#include "Triangle.h"

class Circle: public Shape {
private:
    Point m_pCenter;
    int m_radius;
public:
    Circle(const Point& pCenter, int radius)
        :m_pCenter(pCenter),m_radius(radius)
    {}
    std::ostream& print(std::ostream& out)const override;
    ~Circle() override = default;
    int getRadius();

};


#endif //SHAPE_POLYMORPHIC_CIRCLE_H
