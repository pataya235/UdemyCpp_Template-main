#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    //C
    int my_matrix[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << my_matrix[i][j] << endl;
        }
    }

    char my_fname[] = {'F', 'e', 'l', 'i', 'x', '\0'};
    cout << my_fname << endl;
    char my_lname[] = "Aßmann";
    cout << my_lname << endl;

    //char array is \0 terminated
    //other datatypes in arrays are not
    int values[]{2, 3, 4};
    for (int i = 0; i < 4; i++)
    {
        cout << values[i] << endl;
    }
    cout << values << endl;

    return 0;
}
