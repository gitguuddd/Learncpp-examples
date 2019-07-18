#include <iostream>
enum  Race{
    RACE_ORCS,
    RACE_GOBLINS,
    RACE_TROLLS,
    RACE_OGRES,
    RACE_SKELETON
};

int main() {
Race enemy{RACE_TROLLS};
std::cout<<"I'm a troll and my enum ID is "<<enemy<<"\n";
    return 0;
}