#include <iostream>

#include "exercise.h"

void mod_cross_sum(int I, int J)
{
    for (int k = 0; k < I; k++)
    {
        for (int l = 0; l < J; l++)
        {
            if ((k + l) % 2 == 0)
            {
                std::cout << "i: " << k << " , j: " << l << " := Gerade!" << std::endl;
            }
            else
            {
                std::cout << "i: " << k << " , j: " << l << " := Ungerade!" << std::endl;
            }
        }
    }
}
