#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int main()
{
    int matrix[2][3]{};
    for (const auto &row : matrix)
    {
        for (const auto &value : row)
        {
            std::cout << value << std::endl;
        }
    }

    struct Data
    {
        int x;
        int y;
    };

    std::vector<Data> vec = {{.x = 1, .y = 2}, {.x = 4, .y = 6}, {.x = 8, .y = 9}};
    for (const auto &[a1, b1] : vec)
    {
        std::cout << a1 << b1 << std::endl;
    }

    return 0;
}
