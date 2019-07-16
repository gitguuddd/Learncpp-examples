#include <iostream>
/* This example is of high importance due to this reason:
 * When we're using function returns as parameters in other functions it's best not to use function calls
 * as parameters eg. someFunction( a(), b() ) we might be susceptible to undefined behaviour because architecture
 * might evaluate the given parameters left to right ( a() called before b() ) or right to left ( b() called before a() )
 */
int a() {
    std::cout << "I want to be called first \n";
    return 5;
}

int b() {
    std::cout << "I want to be called second \n";
    return 6;
}

void someFunction(int a, int b){
    std::cout << a + b << ".\n";
}
int main() {
    int aVar{ a() }; // a() will always be called first
    int bVar{ b() }; // b() will always be called second
    someFunction(aVar, bVar); // it doesn't matter whether aVar or bVar are copied first because they are just values
    return 0;
}