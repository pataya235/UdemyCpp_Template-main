#include <iostream>

int main()
{
    int sum = 0;
    while (sum < 10)
    {
        std::cout << "\nCurrent sum: " << sum << " Enter next value: ";
        int input;
        std::cin >> input;

        sum += input;
    }

    return 0;
}
