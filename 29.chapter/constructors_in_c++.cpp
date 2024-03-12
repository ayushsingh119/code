#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // construntor is a special member function with same name as of the class. It is used to initialize the objects of its class, it is automatically invoked whenever an object is created//
    complex(void); // constructor declaration//

    void printNumber()
    {
        cout << "your number is: " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void) // this is a default constructor as it accept no parameters//
{
    a = 0;
    b = 0;
    // cout << "Helloworld" << endl;
}
int main()
{
    complex c, b, d;
    c.printNumber();
    b.printNumber();
    d.printNumber();

    return 0;
}

//========== PROPERTIES OF CONSTRUNTOR ==========//
// It should be declare in the public section of the class//
// They are automatically invoked whenever the object is created//
// They cannot return values and do not have return types//
// It can have default arguments//
// We can't refer to their address//
