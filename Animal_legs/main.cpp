#include <iostream>
namespace Animals{
    enum{
        CHICKEN,
        DOG,
        CAT,
        ELEPHANT,
        DUCK,
        SNAKE,
        MAX_ANIMALS
    };
}
int main() {
    int animalLegs[Animals::MAX_ANIMALS]{2,4,4,4,2,0};
    std::cout<<"An elephant has "<<animalLegs[Animals::ELEPHANT]<<" legs.\n";

    return 0;
}