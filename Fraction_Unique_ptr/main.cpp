#include "Fraction.h"
#include <memory>


void printFraction(std::unique_ptr<Fraction> ptr)
{
    if (ptr)
        std::cout << *ptr;
}

int main()
{
    auto ptr = std::make_unique<Fraction>(3,5);
    printFraction(std::move(ptr));


    return 0;
}