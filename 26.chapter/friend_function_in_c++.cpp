#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    friend complex sumComplex(complex o1, complex o2); // it is friend function, it means sumComplex function now can access the private members //
    void printNumber()
    {
        cout << "Your number is: " << a << " + " << b << "i" << endl;
    }
};

complex sumComplex(complex o1, complex o2) // friend function about //
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2); // this is way of calling the friend function //
    sum.printNumber();

    return 0;
}

//=========== PROPERTIES OF FRIEND FUNCTION =============//
// not in the scope of the class //
// since it is not in the scope of the class , it cannot be called from the object of that class like c1.sumComplex() it is invalid in this way //
// can be invoked without the help of any object //
// usually contains the  objects as argument //
// can be declared inside public or private section of the class //
