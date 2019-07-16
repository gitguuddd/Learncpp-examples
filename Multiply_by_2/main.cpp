#include <iostream>

int main() {
    std::cout <<"Enter an integer: ";
    int num{};//always initialize your variables :)
    std::cin>>num;
    std::cout<<"Double "<<num<<" is "<<num*2<<'\n';//we need to return double the input
    std::cout<<"Triple "<<num<<" is "<<num*3<<'\n';//we need to return triple the input
    return 0;
}