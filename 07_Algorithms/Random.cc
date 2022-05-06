#include <iostream>
#include <random>
#include <vector>

constexpr std::size_t NUM_ELEMENTS = 1000000;

int main()
{
    std::vector<int> my_vector(NUM_ELEMENTS, 0);
    std::random_device seed_generator{};                             //seed is random number
    std::mt19937_64 random_generator{seed_generator()};              //seed is initial value
    std::uniform_int_distribution<int> random_distribution{-10, 10}; //defines range of generator

    for (std::size_t i = 0; i < NUM_ELEMENTS; i++)
    {
        my_vector[i] = random_distribution(random_generator);
    }

    //...

    for (std::size_t i = 0; i < 10; i++)
    {
        std::cout << my_vector[i] << std::endl;
    }

    return 0;
}
