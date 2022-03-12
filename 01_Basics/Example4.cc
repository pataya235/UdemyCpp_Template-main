#include <iostream>
//absolute value = engl. betrag
int main()
{
    std::cout << "Enter year: ";
    int year;
    std::cin >> year;
    if (year < 0)
    {
        year = year * -1;
    }

    if (year % 4 == 0 && year % 100 != 0)
    {
        std::cout << year << " ist ein Schaltjahr";
    }
    else if (year % 100 == 0 && year % 400 == 0)
    {
        std::cout << year << " ist ein Schaltjahr";
    }
    else
    {
        std::cout << year << " ist kein Schaltjahr";
    }
    return 0;
}
