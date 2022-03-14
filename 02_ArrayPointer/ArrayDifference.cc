#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int array_maximum(int *int_array, unsigned int length) //int *input_array <=> int input_array[]
{
    int max_value = 0;
    for (int i = 0; i < length; i++)
    {
        if (i == 0)
        {
            max_value = int_array[i];
        }
        else if (int_array[i] > max_value)
        {
            max_value = int_array[i];
        }
    }
    return max_value;
}

void print_name(char *name)
{
    cout << name << endl;
}

int main()
{
    unsigned int array_size = 10;
    int *p = new int[array_size]; //heap allocation of array
    cout << sizeof(p) << endl;    //size of pointer itself in bytes
    cout << sizeof(*p) << endl;   //size of first array element in bytes

    for (int i = 0; i < array_size; i++)
    {
        p[i] = i;
    }
    for (int i = 0; i < array_size; i++)
    {
        cout << p[i] << " at ";
        cout << &p[i] << endl;
    }

    cout << array_maximum(p, array_size) << " is maximum" << endl;
    delete[] p; //heap de-allocation of array

    int a[5] = {1, 2, 3, 4, 5};
    cout << array_maximum(a, 5) << " is maximum" << endl;

    char name[] = {"Felix Aßmann"}; //End marking (\0) on char-array works for pointer given to function
    print_name(name);

    return 0;
}
