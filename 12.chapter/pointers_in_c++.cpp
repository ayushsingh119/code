#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int *b; // pointer
    b = &a;

    //==== ADDRESS OF ====//
    cout << "The address of a is: " << &a << endl; // address
    cout << "The address of a is: " << b << endl;  // address

    //===== VALUE AT DEREFERENCE OPERATOR =====//
    cout << "The value of address b is: " << *b << endl;

    //===== POINTER TO POINTER =====//
    int **c = &b;
    cout << "The value of b is: " << *b << endl;
    cout << "The address of b is: " << c << endl;
    cout << "The value at address c is: " << **c << endl;

    return 0;
}
