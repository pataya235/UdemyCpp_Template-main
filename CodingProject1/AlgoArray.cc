#include "AlgoArray.h"
#include "DynArray.h"
#include <cstddef>
#include <math.h>

double sum(DynamicArray &dynamic_array)
{
    double sum_value = 0.0;
    for (std::size_t i = 0; i < dynamic_array.m_length; i++)
    {
        sum_value += dynamic_array.m_data[i];
    }
    return sum_value;
}

double mean(DynamicArray &dynamic_array)
{
    return sum(dynamic_array) / dynamic_array.m_length;
}

double median(DynamicArray &dynamic_array)
{
    //assumption array is sorted
    double median_value = 0.0;
    bool has_odd_length = dynamic_array.m_length % 2;
    if (has_odd_length) //1, 2, 3, 4, 5 => 3
    {
        std::size_t index = dynamic_array.m_length / 2;
        median_value = dynamic_array.m_data[index];
    }
    else //1, 2, 3, 4 => 2,5
    {
        std::size_t index1 = dynamic_array.m_length / 2;
        std::size_t index2 = index1 - 1;
        median_value = (dynamic_array.m_data[index1] + dynamic_array.m_data[index2]) / 2.0;
    }
    return median_value;
}

double variance(DynamicArray &dynamic_array)
{
    double mean_value = mean(dynamic_array);
    double variance_value = 0.0;
    double probability = 1.0 / dynamic_array.m_length;
    //V[x] = sum((x[i] - mean)^2)
    for (std::size_t i = 0; i < dynamic_array.m_length; i++)
    {
        double x_i = dynamic_array.m_data[i];
        variance_value += pow(x_i - mean_value, 2.0) * probability;
    }
    return variance_value;
}

double stddev(DynamicArray &dynamic_array)
{
    double variance_value = variance(dynamic_array);
    double stddev_value = sqrt(variance_value);
    return stddev_value;
}
