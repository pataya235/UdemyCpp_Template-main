#include <iostream>
#include <numeric>
#include <vector>

void print_vector(const std::vector<double> &my_vector)
{
    for (std::size_t i = 0; i < my_vector.size(); i++)
    {
        std::cout << "Vec[" << i << "] = " << my_vector[i] << std::endl;
    }
}

void print_vector_info(const std::vector<double> &my_vector)
{
    std::cout << "Size: " << my_vector.size() << std::endl;
    std::cout << "Capacity: " << my_vector.capacity() << std::endl;
    std::cout << "Empty? " << std::boolalpha << my_vector.empty() << std::endl << std::endl;
    std::cout << std::endl;
}

int main()
{
    std::vector<double> my_vector(10, 5);
    std::iota(my_vector.begin(), my_vector.end(), 0);

    print_vector(my_vector);
    print_vector_info(my_vector);

    //[begin, end)
    for (auto it = my_vector.begin(); it != my_vector.end(); ++it)
    {
        std::cout << *it << std::endl;
    }

    std::cout << std::endl;

    //foreach loop
    for (const auto &val : my_vector)
    {
        std::cout << val << std::endl;
    }

    /*
    auto begin = my_vector.begin();
    auto end = my_vector.end(); //vector element out of range

    std::cout << *begin << std::endl;
    std::cout << *end << std::endl;
    */
    return 0;
}
