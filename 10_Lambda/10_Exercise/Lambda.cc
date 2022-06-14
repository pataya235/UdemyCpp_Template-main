#include <algorithm>
#include <cmath>
#include <iostream>
#include <random>
#include <vector>

void print_vector(const std::vector<int> &vec)
{
    for (const auto &val : vec)
    {
        std::cout << val << std::endl;
    }

    std::cout << std::endl;
}

int main()
{
    std::mt19937 gen(42);
    std::uniform_int_distribution<int> dist(1, 52);

    std::vector<int> my_vector(10, 0);
    std::vector<int> my_result(10, 0);
    std::generate(my_vector.begin(), my_vector.end(), [&]() -> int { return dist(gen); });

    for (const auto &val : my_vector)
    {
        std::cout << val << std::endl;
    }
    std::cout << std::endl;

    // Exercise 1
    bool has_no_even = std::none_of(my_vector.begin(), my_vector.end(), [](int val) -> bool { return (val % 2 == 0); });

    if (has_no_even)
    {
        std::cout << "None of the vector values are even" << std::endl;
    }
    else
    {
        std::cout << "The vector has even numbers" << std::endl;
    }

    // Exercise 2
    std::transform(my_vector.begin(), my_vector.end(), my_result.begin(), [](int val) { return val * val; });
    print_vector(my_result);

    return 0;
}
