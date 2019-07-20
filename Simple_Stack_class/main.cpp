#include <iostream>
#include <cassert>
class Stack{
private:
    static const int s_maxStackLength{ 10 };
    int m_elements[s_maxStackLength];
    int m_length=0;

public:
void reset(){
    m_length=0;
}
bool push(int element){
    if(m_length==s_maxStackLength)
        return false;
    m_elements[m_length++]=element;
    return true;
}
int pop(){
    assert(m_length>0&&"Cannot pop an empty array");
    return m_elements[--m_length];
}
void print(){
    std::cout<<"( ";
    for(int i=0;i<m_length;i++){
        std::cout<<m_elements[i]<<" ";
    }
    std::cout<<")\n";
}
};
int main() {
    Stack stack;
    stack.reset();

    stack.print();

    stack.push(5);
    stack.push(3);
    stack.push(8);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();

    stack.print();

    return 0;
}