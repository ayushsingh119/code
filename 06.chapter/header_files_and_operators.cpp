#include <iostream>
using namespace std;

int main()
{
    //====== OPERATORS ======//
    int a = 4, b = 5;

    //=== ARITHMETIC OPERATORS ===//

    cout << "The value of a + b is: " << a + b << endl;
    cout << "The value of a - b is: " << a - b << endl;
    cout << "The value of a * b is: " << a * b << endl;
    cout << "The value of a / b is: " << a / b << endl;
    cout << "The value of a % b is: " << a % b << endl;
    cout << "The value of a ++ is: " << a++ << endl;
    cout << "The value of a -- is: " << a-- << endl;
    cout << "The value of ++a is: " << ++a << endl;
    cout << "The value of --a is: " << --a << endl;
    cout << "==================================" << endl;

    //=== COMPARISION OPERATORS ===//
    cout << boolalpha;
    cout << "The  value of a==b is: " << (a == b) << endl;
    cout << "The  value of a!=b is: " << (a != b) << endl;
    cout << "The  value of a>b is: " << (a > b) << endl;
    cout << "The  value of a<b is: " << (a < b) << endl;
    cout << "The  value of a<=b is: " << (a <= b) << endl;
    cout << "The  value of a>=b is: " << (a >= b) << endl;
    cout << "==================================" << endl;

    //=== LOGICAL OPERATORS ===//
    cout << "The  value of (a == b) && (a > b) is: " << ((a == b) && (a < b)) << endl; // AND operator. false
    cout << "The  value of (a == b) || (a > b) is: " << ((a == b) || (a < b)) << endl; // OR operator. true
    cout << "The  value of (!(a == b)) is: " << (!(a == b)) << endl;                   // OR operator. true
    return 0;
}
