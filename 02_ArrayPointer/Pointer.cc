#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// &: Memory Address / Reference
// *: Value of memory adress / De-Reference

void print_int_pointer(int *&p)
{
    cout << "De-ref: " << *p << " Ref: " << p << " pointer adress: " << &p << endl;
}

void print_double_pointer(double *&p)
{
    cout << "De-ref: " << *p << " Ref: " << p << " pointer adress: " << &p << endl;
}

int main()
{
    //Stack allocation
    int num = 5;
    int *p = &num;
    cout << "(num = 5 and *p = &num)" << endl;
    cout << "Wert von num:                  num     = " << num << endl;
    cout << "Adresse von num:               &num    = " << &num << endl;
    cout << "Adresse von p:                 &p      = " << &p << endl;
    cout << "Wert von p/Adresse von num:    p       = " << p << endl;
    cout << "Wert von num:                  *p      = " << *p << endl << endl;

    //Heap allocation of new int, but pointer on stack!!
    int *q = new int{4};
    cout << "Memory adress of q = " << &q << endl;
    cout << "Memory adress of pointed value = " << q << endl;
    cout << "Value of pointed value = " << *q << endl << endl;

    *q = 1337;
    cout << "Memory adress of q = " << &q << endl;
    cout << "Memory adress of pointed value = " << q << endl;
    cout << "Value of pointed value = " << *q << endl;

    //Heap de-allocation of new int, not of pointer!
    delete q;                                                         //pointer still points on heap adress
    cout << "random value after heap de-allocation = " << *q << endl; //random value

    int a = 1337;
    double b = -13.73;
    int *c = &a;
    double *e = &b;
    print_int_pointer(c);
    *c -= 10;
    print_int_pointer(c);
    int *d = &a;
    print_int_pointer(d);
    *c += 10;
    print_int_pointer(d);
    *c = b;
    print_int_pointer(c);
    print_double_pointer(e);

    cout << "Memory adress of pointed value from pointer q (on heap) = " << q << endl;
    q = nullptr; //NULL != nullptr
    cout << "Memory adress of pointed value from pointer q (on null) = " << q << endl;
    if (q != nullptr) //safety question after "delete"
    {
        cout << "Value of pointed value = " << *q << endl;
    }
    return 0;
}
