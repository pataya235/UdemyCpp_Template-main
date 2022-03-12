#include <cstdint>
#include <iostream>

void guessing_game() //definition
{
    bool has_won = false;

    do
    {
        std::cout << "Enter value >=0 and <=10: ";
        std::uint16_t a = 0;
        std::cin >> a;
        if (a <= 10)
        {
            if (a == 4)
            {
                std::cout << "Won" << std::endl;
                has_won = true;
            }
            else if (a % 2 == 0)
            {
                std::cout << "Won Wooden Spoon" << std::endl;
            }
            else
            {
                std::cout << "Lost" << std::endl;
            }
        }
        else
        {
            std::cout << "Invalid" << std::endl;
        }
    } while (has_won == false);
}
