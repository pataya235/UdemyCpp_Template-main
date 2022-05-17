#include <algorithm>
#include <chrono>
#include <functional>
#include <iostream>
#include <iterator>
#include <random>
#include <vector>

#include "exercise.h"

// Exercise 2
std::vector<bool> shuffle_till_equal(const BinaryArray &target, BinaryArray input)
{
    bool equal = false;
    int iteration = 1;

    while (!equal)
    {
        if (iteration % 250'000 == 0)
        {
            std::cout << std::endl << "Iteration (2): " << iteration;
        }
        ++iteration;
        auto timestamp =
            std::chrono::time_point_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now())
                .time_since_epoch()
                .count();

        if (std::equal(input.begin(), input.end(), target.begin()))
        {
            equal = true;
        }
    }
    return input;
}

// Exercise 3
std::vector<bool> smart_shuffle_till_equal(const BinaryArray &target, BinaryArray input)
{
    bool equal = false;
    std::vector<bool>::iterator first = input.begin();
    std::vector<bool>::iterator last = input.end();
    int iteration = 1;

    while (!equal)
    {
        if (iteration % 100'000 == 0)
        {
            std::cout << std::endl << "Iteration (3): " << iteration;
        }
        ++iteration;
        auto timestamp =
            std::chrono::time_point_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now())
                .time_since_epoch()
                .count();

        int index = std::distance(input.begin(), first); //iterator distance defines index
        if (*first == target[index]) //if value of first-iterator (on element of input-array) == target[index]
            ++first;                 //++iterator

        if (first == last)
            equal = true;
    }
    return input;
}
