//========== BUILD IN DATATYPE ============//

// #include <iostream>
// using namespace std;

// int c = 45; // global variable //

// int main()
// {
//     int a, b, c;
//     cout << "Enter the value of a: " << endl;
//     cin >> a;
//     cout << "Enter the value of b: " << endl;
//     cin >> b;
//     c = a + b;
//     cout << "The sum is: " << c << endl;
//     cout << "The global c is: " << ::c << endl; // here we use scope resolution operator for calling global variable //
//     return 0;
// }

//===================================================================================================================================//

//=========== FLOAT, DOUBLE AND LONG DOUBLE LITERALS =============//

// #include <iostream>
// using namespace std;

// int main()
// {
//     float d = 34.4F;
//     long double e = 34.4L;
//     cout << "The size of 34.4 is: " << sizeof(34.4) << endl; // 8
//     cout << "The size of 34.4f is: " << sizeof(34.4f) << endl; //4
//     cout << "The size of 34.4F is: " << sizeof(34.4F) << endl; //4
//     cout << "The size of 34.4l is: " << sizeof(34.4l) << endl; //16
//     cout << "The size of 34.4L is: " << sizeof(34.4L) << endl; //16

//     return 0;
// }

//========================================================================================================================//

//==== REFERENCE VARIABLE =====//

// #include <iostream>
// using namespace std;

// int main()
// {
//     float x = 455;
//     float &y = x;
//     cout << x << endl;
//     cout << y << endl;

//     return 0;
// }

//=====================================================================================================================================//

//============ TYPECASTING =============//

#include <iostream>
using namespace std;

int main()
{
    int a = 45;
    float b = 45.46;
    cout << "The value of a is: " << (float)a << endl;
    cout << "The value of b is: " << (int)b << endl;
    return 0;
}
