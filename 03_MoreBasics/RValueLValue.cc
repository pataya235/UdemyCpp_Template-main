#include <iostream>

void f(const int &v) //only changeable parameters into functions with reference except const ref
{
    std::cout << v;
}

int main()
{
    int a = 3;        // LValue
    const int b = 3;  // const LValue
    int &c = a;       // LValue reference
    const int &d = a; // const LValeu reference

    f(a);
    f(b);
    f(c);
    f(d);

    f(3);

    return 0;
}
