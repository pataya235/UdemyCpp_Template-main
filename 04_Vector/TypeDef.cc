#include <iostream>
#include <vector>

// typedef Type AliasName
typedef std::vector<int> Vector;
typedef std::vector<std::vector<int>> Matrix;

// using AliasName = Type
using Vector2 = std::vector<int>;
using Matrix2 = std::vector<std::vector<int>>;

int main()
{
    Vector v1;
    Matrix m1;
    Vector2 v1;
    Matrix2 m1;

    return 0;
}
