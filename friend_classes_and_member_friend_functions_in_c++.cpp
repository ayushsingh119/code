#include <iostream>
using namespace std;

class complex; // forward declaration we write this because it will tell the calculator class that complex class is coming forward  //

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(complex, complex);
    int sumComComplex(complex, complex);
};

class complex
{
    int a, b;
    // here down two line individual decalring functions as friend //
    friend int calculator ::sumRealComplex(complex, complex);
    friend int calculator ::sumComComplex(complex, complex);
    // for makin friend function to all function of calculator class then we will write code down line//
    // friend class calculator ;//
public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is: " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumComComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);

    calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is: " << res << endl;

    int resc = calc.sumComComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is: " << resc << endl;
    return 0;
}