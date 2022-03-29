#include <cmath>
#include <iostream>
#include <vector>

void fill_double_vector(std::vector<double> &vec)
{
    for (std::size_t i = 0; i < vec.size(); i++)
    {
        vec[i] = static_cast<double>(i);
    }
}

void print_double_vector(std::vector<double> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << "vec[" << i << "]= " << vec[i] << std::endl;
    }
    std::cout << std::endl;
}

void math_with_double_vector(std::vector<double> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << "exp: " << std::exp(vec[i]) << std::endl;
    }
    std::cout << std::endl;
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << "log: " << std::log(vec[i]) << std::endl;
    }
}

int main()
{
    std::vector<double> my_vector(6, 0);
    fill_double_vector(my_vector);
    print_double_vector(my_vector);
    math_with_double_vector(my_vector);

    return 0;
}
