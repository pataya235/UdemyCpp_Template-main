#include <iostream>

constexpr int faculty(int n)
{
    if (n > 1)
    {
        return n * faculty(n - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int l = faculty(3);
    int a[faculty(3)]{}; //value known in compile time, needed for array declaration

    return 0;
}
