#include <iomanip>
#include <iostream>


int main()
{
    double number = 3.14;
    std::cout << std::setprecision(20) << number << std::endl;
    // no typecast
    int number2 = number;
    std::cout << number2 << std::endl;

    // C: (newDtype)(varName)
    float number3 = (float)(number); //less accuracy, because float<double
    std::cout << std::setprecision(20) << number3 << std::endl;
    double number4 = (double)(number3); //same accuracy, because double>float
    std::cout << std::setprecision(20) << number4 << std::endl;

    // C++: static_cast<newDtype>(varName)
    float number5 = static_cast<float>(number);
    std::cout << std::setprecision(20) << number5 << std::endl;
    double number6 = static_cast<double>(number3);
    std::cout << std::setprecision(20) << number6 << std::endl;
    int number7 = 1337000;
    std::cout << number7 << std::endl;
    char number8 = static_cast<char>(number7);
    std::cout << static_cast<int>(number8) << std::endl;
    return 0;
}
