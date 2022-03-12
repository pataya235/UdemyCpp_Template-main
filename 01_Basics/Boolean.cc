#include <iostream>

int main()
{
    int a;
    std::cout << "enter number: ";
    std::cin >> a;
    bool check = (a >= 0 && a <= 10);
    std::cout << std::boolalpha << check << std::endl; //boolalpha: 1/0 -> true/false
    bool check2 = !(a >= 0 && a <= 10);
    std::cout << std::boolalpha << check2 << std::endl;

    return 0;
}
