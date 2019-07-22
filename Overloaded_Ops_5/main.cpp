#include <iostream>
#include "Cents.h"
#include "Dollars.h"

void printCents(Cents cents)
{
    std::cout << cents; // cents will be implicitly cast to an int here
}

int main()
{
    Dollars dollars(9);
    printCents(dollars); // dollars will be implicitly cast to a Cents here

    return 0;
}