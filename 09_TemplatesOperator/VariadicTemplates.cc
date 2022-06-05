#include <iostream>
#include <string>

template <typename T>
T concat(T first)
{
    return first;
}

template <typename T, typename... Args>
T concat(T first, Args... args) //... >=1 argumente
{
    return first + concat(args...);
}

int main()
{
    std::string s1 = "Ha";
    std::string s2 = "ll";
    std::string s3 = "o";

    std::cout << concat(s1, s2, s3) << std::endl;
    std::cout << concat(2, 3, 4) << std::endl;


    return 0;
}
