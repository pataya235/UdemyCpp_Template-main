#pragma once
#include <cstddef>
/**
 * @brief DynamicArray Structure
 * @param double* m_data
 * @param std::size_t m_length
 */
struct DynamicArray
{
    double *m_data;
    std::size_t m_length;
};

/**
 * @brief Create a dynamic array object
 * @param value The fill value for the array
 * @param length The length of the array
 */
DynamicArray create_dynamic_array(const double &value, const std::size_t &length);

/**
 * @brief Push back the value at the end of the array
 *
 * @param input_array The dynamic array
 * @param size The size of the array
 * @param value The value to append to the array
 */
void push_back(DynamicArray &DynamicArray, const int &value);

/**
 * @brief Pop back the value at the end of the vector
 *
 * @param DynamicArray The dynamic array
 * @param size The size of the array
 */
void pop_back(DynamicArray &DynamicArray);
