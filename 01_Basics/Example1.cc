#include <iostream>

int main()
{
    double side = 0.0;

    std::cout << "Enter side length: ";
    std::cin >> side;
    double area = side * side;
    double perimeter = 4 * side;
    std::cout << "Area: " << area << std::endl;
    std::cout << "Perimeter: " << perimeter;
    return 0;
}
