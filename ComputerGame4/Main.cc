#include "Game.h"
#include <iostream>
#include <stdlib.h>

int main()
{
    bool repeat = true;
    while (repeat)
    {
        game();
        std::cout << "Play again? (0=No, 1 = Yes)" << std::endl;
        std::cin >> repeat;
        system("clear");
    }

    return 0;
}
