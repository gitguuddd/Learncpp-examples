//https://www.learncpp.com/cpp-tutorial/74a-returning-values-by-value-reference-and-address/
#include <iostream>
struct Employee{};
int SumTo(const int value);
void printEmployeeName(const Employee &employee);
void minmax(const int x, const int y, int &minOut, int &maxOut);
int getIndexOfLargestValue(int *array, int length);
const int& getElement(const int *array, const int index);

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}