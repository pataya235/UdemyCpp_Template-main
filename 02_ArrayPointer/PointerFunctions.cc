#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//Call by Value (local copy)
void f(int *p_function)
{
    cout << "(F): p_function = " << p_function << endl;
    cout << "(F): &p_function = " << &p_function << endl; //Other adress as p_number
}

//Call by Reference (ab Übergabe von Argumenten > 8 Byte sinnvoll)
void g(int *&p_function)
{
    cout << "(G): p_function = " << p_function << endl;
    cout << "(G): &p_function = " << &p_function << endl; //Same adress as p_number
}

void f1(int number) //CallByValue
{
    number++;
}

void f2(int &number) //CallByReference
{
    number++;
}

int f3(int number) //CallByValue
{
    number++;
    return number;
}

int main()
{
    int *p_number = new int{4};
    cout << "(MAIN): p_number = " << p_number << endl;
    cout << "(MAIN): &p_number = " << &p_number << endl;
    f(p_number);
    g(p_number);

    int num = 0;
    cout << num << endl;
    f1(num);
    cout << num << endl;
    f2(num);
    cout << num << endl;
    num = f3(num);
    cout << num << endl;

    return 0;
}
