#include <iostream>

#include "Matrix.h"

int main()
{
    Matrix m1(1.0, 2.0, 3.0, 4.0);
    m1.print_matrix();

    Matrix m2(-1.0, -2.0, -3.0, -4.0);
    m2.print_matrix();

    Matrix m3 = m1 + m2;
    m3.print_matrix();

    Matrix m4 = m1 - m1;
    m4.print_matrix();

    m1 -= m1;
    m1.print_matrix();

    m2 += m2;
    m2.print_matrix();

    Matrix m5 = m2 * 1.5;
    m5.print_matrix();

    m5 *= 2.5;
    m5.print_matrix();

    Matrix m6 = m2 / 1.5;
    m6.print_matrix();

    m6 /= 2.5;
    m6.print_matrix();

    return 0;
}
