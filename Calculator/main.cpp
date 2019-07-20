#include <iostream>
typedef int (*arithmeticFcn)(int,int);
struct arithmeticStruct{
    char mathOp;
    arithmeticFcn fcn;
};
int add(int x, int y){
    return x+y;
}
int subtract(int x, int y){
    return x-y;
}
int multiply(int x, int y){
    return x*y;
}
int divide(int x, int y){
    return x/y;
}
static const arithmeticStruct arithmeticArray[] {
        { '+', add },
        { '-', subtract },
        { '*', multiply },
        { '/', divide }
};
arithmeticFcn getArithmeticFunction(char op){
    for(auto &arith:arithmeticArray){
        if (op==arith.mathOp)
            return arith.fcn;
    }
    return add;
}
int getInteger(){
    std::cout<<"Enter an integer: ";
    int x;
    std::cin>>x;
    return x;
}
char getOperation(){
    std::cout<<"Enter a valid operator (+,-,*,/): ";
    char o;
    do{
        std::cin>>o;
    }
    while(o!='+'&&o!='-'&&o!='*'&&o!='/');
    return o;
}

int main() {
    int x=getInteger();
    char op=getOperation();
    int y=getInteger();
    arithmeticFcn fcn=getArithmeticFunction(op);
    std::cout<<x<<' '<<op<<' '<<y<<" = "<<fcn(x,y)<<"\n";
    return 0;
}