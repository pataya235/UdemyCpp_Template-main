#include <iostream>

void func(int val)
{
    std::cout << "Inner val: " << val << std::endl;
}

int main()
{
    int val = 0;
    std::cout << "Outer val: " << val << std::endl;
    func(val++); //Post-increment
    std::cout << "Outer val: " << val << std::endl;
    func(++val); //Pre-increment
    std::cout << "Outer val: " << val << std::endl;

    return 0;
}
