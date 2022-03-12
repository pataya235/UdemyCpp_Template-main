#include <iostream>

int user_input()
{
    int number;
    std::cout << "please enter a number: ";
    std::cin >> number;
    return number;
}

bool input_check(int number)
{
    if (number % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int my_number = user_input();
    std::cout << my_number << std::endl;
    bool my_check = input_check(my_number);
    std::cout << "Is even? " << std::boolalpha << my_check << std::endl;
    return 0;
}
