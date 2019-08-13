#include "Fraction.h"

int main() {
    std::cout << "Enter a nominator:";
    int nominator;
    std::cin>>nominator;
    std::cout << "Enter a denominator:";
    int denominator;
    std::cin>>denominator;
    try{
        Fraction f(nominator,denominator);
        std::cout<<"Your fraction is "<<f<<"\n";
    }
    catch(std::exception& exception){
        std::cout<<exception.what()<<"\n";
    }

    return 0;
}