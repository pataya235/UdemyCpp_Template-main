#include "AlgoArray.h"
#include "DynArray.h"
#include <cstddef>
#include <iostream>

int main()
{
    double fill_value = 1.0;
    std::size_t length = 5;
    DynamicArray my_array = create_dynamic_array(fill_value, length);

    for (std::size_t i = 0; i < length; i++)
    {
        //std::cout << my_array.m_data[i] << std::endl;
        my_array.m_data[i] = i;
    }

    std::cout << "Mean = " << mean(my_array) << std::endl;
    std::cout << "Median = " << median(my_array) << std::endl;
    std::cout << "Variance = " << variance(my_array) << std::endl;
    std::cout << "Stddev = " << stddev(my_array) << std::endl;
    return 0;
}
