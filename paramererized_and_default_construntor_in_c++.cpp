// //=============== DEFAULT CONSTRUCTOR ===============//

// #include <iostream>
// using namespace std;

// class complex
// {
//     int a, b;

// public:
//     complex(void); // constructor declaration//

//     void printNumber()
//     {
//         cout << "your number is: " << a << " + " << b << "i" << endl;
//     }
// };

// complex ::complex(void) // this is a default constructor as it takes no parameters//
// {
//     a = 0;
//     b = 0;
//     // cout << "Helloworld" << endl;
// }
// int main()
// {
//     complex a;
//     a.printNumber();
//     return 0;
// }

//=================================================================================================//

//=============== PARAMETERIZED CONSTRUCTOR =================//

// #include <iostream>
// using namespace std;

// class complex
// {
//     int a, b;

// public:
//     complex(int x, int y); // constructor declaration//

//     void printNumber()
//     {
//         cout << "your number is: " << a << " + " << b << "i" << endl;
//     }
// };

// complex ::complex(int x, int y) // this is a parameterized constructor as it accepts two parameters//
// {
//     a = x;
//     b = y;
// }
// int main()
// {

//     complex a(4, 6); // implicit call//
//     a.printNumber();

//     complex b = complex(5, 7); // explicit call //
//     b.printNumber();
//     return 0;
// }

//=============================================================================================//

//=============== ANOTHER EXMPLE OF PARAMETERIZED CONSTRUCTOR =====================//

#include <iostream>
using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "The point is(" << x << ", " << y << ")" << endl;
    }
};
int main()
{
    point p(1, 1);
    p.displayPoint();

    point q(4, 6);
    q.displayPoint();
    return 0;
}

// create a function (hint: make it friend function) which takes 2 point objects and compute the distance between them