#include <iostream>
#include <string>

int main() {
    std::string array[]{"Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"};
    std::cout<<" Please enter a name to be used in the search: ";
    std::string name{};
    std::cin>>name;
    bool contains(false);
    for(auto const& names:array){
        if(names==name){
            contains=true;
            break;}
    }
    if(contains)
        std::cout<<name<<" was found.\n";
    else
        std::cout<<name<<" was not found.\n";

    return 0;
}