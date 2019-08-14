#include "Fraction.h"
#include <memory>


void printFraction(const Fraction* const ptr)
{
    if (ptr)
        std::cout << *ptr;
}

int main()
{
    auto ptr = std::make_unique<Fraction>(3,5);
    printFraction(ptr.get());


    return 0;
}