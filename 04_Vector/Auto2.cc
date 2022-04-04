#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int main()
{
    //1: auto val : vec => int val : vec
    //2: auto &val : vec => int &val : vec
    //3: const auto &val : vec => const int& val : vec
    //4: const auto val : vec => const int val : vec

    std::vector<double> vec(10, 5);
    std::iota(vec.begin(), vec.end(), 0);

    for (const auto val : vec)
    {
        std::cout << val << std::endl;
    }
    std::cout << std::endl;

    return 0;
}
