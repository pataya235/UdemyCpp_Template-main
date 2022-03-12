#include <iostream>

int main()
{
    bool is_prime = true;
    int number;
    std::cout << "Enter number: ";
    std::cin >> number;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            is_prime = false;
        }
    }
    if (is_prime == true)
    {
        std::cout << "Is a prime number" << std::endl;
    }
    else
    {
        std::cout << "Is not a prime number" << std::endl;
    }

    return 0;
}
