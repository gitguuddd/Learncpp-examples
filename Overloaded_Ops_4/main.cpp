#include <iostream>
#include "MyString.h"

int main() {
    MyString string("Hello, world!");
    std::cout << string(7, 5); // start at index 7 and return 5 characters
    return 0;
}