#pragma once
#include <iostream>

class A //Base class with 3 member variables
{
public: //outside of class
    int x;

protected: //in base class and derived class
    int y;

private: //only in base class
    int z;
};

class B : public A //B erbt public von A
{
    // x is public
    // y is protected
    // z is not accessible from B
    void foo()
    {
        std::cout << y << std::endl;
    }
};

class C : protected A //C erbt protected von A
{
    // x is protected
    // y is protected
    // z is not accessible from C
    void foo()
    {
        std::cout << y << std::endl;
    }
};

class D : private A //D erbt private von A (default)
{
    // x is private
    // y is private
    // z is not accessible from D
    void foo()
    {
        std::cout << y << std::endl;
    }
};
