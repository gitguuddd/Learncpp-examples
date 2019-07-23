#include <iostream>
#include "FixedPoint2.h"

std::ostream& operator<<(std::ostream& out, const FixedPoint2 &f ){
    out<< static_cast<double>(f);
    return out;
}
std::istream& operator>>(std::istream& in, FixedPoint2 &f){
    double d;
    in>>d;
    f=FixedPoint2(d);
    return in;
}
FixedPoint2 operator+(const FixedPoint2 &f1, const FixedPoint2 &f2){
    return FixedPoint2(static_cast<double>(f1)+ static_cast<double>(f2));
}
void testAddition()
{
    // h/t to reader Sharjeel Safdar for this method of testing
    std::cout << std::boolalpha;
    std::cout << (FixedPoint2(0.75) + FixedPoint2(1.23) == FixedPoint2(1.98)) << '\n'; // both positive, no decimal overflow
    std::cout << (FixedPoint2(0.75) + FixedPoint2(1.50) == FixedPoint2(2.25)) << '\n'; // both positive, with decimal overflow
    std::cout << (FixedPoint2(-0.75) + FixedPoint2(-1.23) == FixedPoint2(-1.98)) << '\n'; // both negative, no decimal overflow
    std::cout << (FixedPoint2(-0.75) + FixedPoint2(-1.50) == FixedPoint2(-2.25)) << '\n'; // both negative, with decimal overflow
    std::cout << (FixedPoint2(0.75) + FixedPoint2(-1.23) == FixedPoint2(-0.48)) << '\n'; // second negative, no decimal overflow
    std::cout << (FixedPoint2(0.75) + FixedPoint2(-1.50) == FixedPoint2(-0.75)) << '\n'; // second negative, possible decimal overflow
    std::cout << (FixedPoint2(-0.75) + FixedPoint2(1.23) == FixedPoint2(0.48)) << '\n'; // first negative, no decimal overflow
    std::cout << (FixedPoint2(-0.75) + FixedPoint2(1.50) == FixedPoint2(0.75)) << '\n'; // first negative, possible decimal overflow
}

int main()
{
    testAddition();

    FixedPoint2 a(-0.48);
    std::cout << a << '\n';

    std::cout << -a << '\n';

    std::cout << "Enter a number: "; // enter 5.678
    std::cin >> a;

    std::cout << "You entered: " << a << '\n';

    return 0;
}