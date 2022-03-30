#include <iostream>
#include <numeric>
#include <vector>

void print_vector(const std::vector<int> &my_vector)
{
    for (std::size_t i = 0; i < my_vector.size(); i++)
    {
        std::cout << "Vec[" << i << "] = " << my_vector[i] << std::endl;
    }
}

void print_vector_info(const std::vector<int> &my_vector)
{
    std::cout << "Size: " << my_vector.size() << std::endl;
    std::cout << "Capacity: " << my_vector.capacity() << std::endl;
    std::cout << "Empty? " << std::boolalpha << my_vector.empty() << std::endl << std::endl;
    std::cout << std::endl;
}

int main()
{
    std::vector<int> my_vector(10, 5);
    std::iota(my_vector.begin(), my_vector.end(), 0);

    print_vector(my_vector);
    print_vector_info(my_vector);

    int first = my_vector.front(); //first value in vector
    int last = my_vector.back();   //lasst value in vector
    std::cout << first << " " << last << std::endl;
    int *array = my_vector.data();
    std::cout << *array << std::endl;

    std::vector<int>::iterator begin = my_vector.begin();
    std::vector<int>::iterator end = my_vector.end(); //element out of range

    std::cout << *begin << std::endl;
    std::cout << *end << std::endl;

    begin++;
    end--;

    std::cout << *begin << std::endl;
    std::cout << *end << std::endl;

    return 0;
}
