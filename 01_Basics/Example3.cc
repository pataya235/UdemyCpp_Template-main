#include <iostream>
//absolute value = engl. betrag
int main()
{
    int x = 0;
    std::cout << "Enter Value: ";
    std::cin >> x;
    if (x < 0)
    {
        std::cout << "absolute: " << x * -1;
    }
    else
    {
        std::cout << "absolute: " << x;
    }
    return 0;
}
