#include <iostream>
#include <vector>
class MyClass
{
private:
    static std::vector<char> s_myChars;

public:

    class _init // we're defining a nested class named _init
    {
    public:
        _init() // the _init constructor will initialize our static variable
        {
            s_myChars.push_back('a');
            s_myChars.push_back('e');
            s_myChars.push_back('i');
            s_myChars.push_back('o');
            s_myChars.push_back('u');
        }
    } ;

private:
    static _init s_initializer; // we'll use this static object to ensure the _init constructor is called
};

std::vector<char> MyClass::s_myChars; // define our static member variable
MyClass::_init MyClass::s_initializer; // define our static initializer, which will call the _init constructor, which will initialize s_mychars