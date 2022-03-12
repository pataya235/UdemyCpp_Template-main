#include <iostream>

unsigned long long factorial(unsigned int n)
{
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    unsigned int n = 20;
    unsigned long long n_fac = factorial(n);
    std::cout << "20! = " << n_fac << std::endl;

    return 0;
}
