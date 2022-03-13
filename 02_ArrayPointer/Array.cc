#include <iostream>

int main()
{
    //C
    int my_array[] = {23, 12, 323, 2, 12};
    std::cout << my_array[0] << std::endl;
    std::cout << my_array[1] << std::endl;
    std::cout << my_array[2] << std::endl;
    std::cout << my_array[3] << std::endl;
    std::cout << my_array[4] << std::endl;

    float user_balances[10] = {};
    for (int i = 0; i < 10; i++)
    {
        std::cout << user_balances[i] << std::endl;
        user_balances[i] = i * 3.0f;
        std::cout << user_balances[i] << std::endl;
    }

    float vector1[3] = {};
    float vector2[3] = {};
    std::cout << "enter 6 vector values" << std::endl;
    for (unsigned int i = 0; i < 3; i++)
    {
        std::cout << "vector1[" << i << "]: ";
        std::cin >> vector1[i];
    }
    for (unsigned int i = 0; i < 3; i++)
    {
        std::cout << "vector2[" << i << "]: ";
        std::cin >> vector2[i];
    }
    for (unsigned int i = 0; i < 3; i++)
    {
        std::cout << "v1[" << i << "] + v2[" << i << "] = ";
        std::cout << vector1[i] + vector2[i] << std::endl;
    }

    return 0;
}
