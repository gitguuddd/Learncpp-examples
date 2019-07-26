
#include <iostream>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
int main()
{
    Cat fred("Fred"), misty("Misty"), zeke("Zeke");
    Dog garbo("Garbo"), pooky("Pooky"), truffle("Truffle");

    // Set up an array of pointers to animals, and set those pointers to our Cat and Dog objects
    Animal *animals[] = { &fred, &garbo, &misty, &pooky, &truffle, &zeke };
    for (auto animal : animals)
        std::cout << animal->getName() << " says " << animal->speak() << '\n';

    return 0;
}