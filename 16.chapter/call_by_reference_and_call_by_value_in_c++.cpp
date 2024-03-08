// #include <iostream>
// using namespace std;

// int sum(int a, int b)
// {
//     int c = a + b;
//     return c;
// }

// // this will not swap //
// void swap(int a, int b)
// {
//     int temp = a; // temp = a = 4  , b = 5 //
//     a = b;        // a = b = 5 which implies that a = 5//
//     b = temp;     // b = temp = 4 which implies that b = 4 //
// }
// int main()
// {
//     int a = 4, b = 5;
//     cout << "The sum of 4 and 5 is: " << sum(4, 5) << endl;
//     cout << "The value of a: " << a << " The value of b is: " << b << endl;
//     swap(a, b); // here this portion is just giving the actual parameter only on a and b of function //
//     cout << "The value of a: " << a << " The value of b is: " << b << endl;
//     return 0;
// }

//==========================================================================================================//

//============== CALL BY REFERENCE USING POINTER ================//

// #include <iostream>
// using namespace std;

// void pointerswap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main()
// {
//     int a = 2, b = 5;
//     cout << "The value at a is: " << a << " The value at b is: " << b << endl;
//     pointerswap(&a, &b);
//     cout << "The value at a is: " << a << " The value at b is: " << b << endl;

//     return 0;
// }

//============ ANOTHER OF CALL BY REFERENCE ============//

// #include <iostream>
// using namespace std;

// void pointerswap(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int main()
// {
//     int a = 2, b = 5;
//     cout << "The value at a is: " << a << " The value at b is: " << b << endl;
//     pointerswap(a, b);
//     cout << "The value at a is: " << a << " The value at b is: " << b << endl;

//     return 0;
// }

//======================================================================================//

// #include <iostream>
// using namespace std;

// int &swapReferenceVar(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
//     return a;
// }
// int main()
// {
//     int a = 4, b = 8;
//     cout << "The value at a is: " << a << " The value at b is: " << b << endl;
//     swapReferenceVar(a, b) = 67;
//     cout << "The value at a is: " << a << " The value at b is: " << b << endl;
//     return 0;
// }

//=====================================================================================================//

//===================== CALL BY VALUE =========================//

#include <iostream>
using namespace std;

void modifyValue(int x)
{
    x = 100; // This modification affects only the local copy
    cout << "Value inside function: " << x << endl;
}

int main()
{
    int a = 20;
    cout << "Value before function call: " << a << endl; // Prints the initial value of 'a'
    modifyValue(a);                                      // Calls modifyValue with 'a'. Inside the function, 'x' is modified, not 'a'.
    cout << "Value after function call: " << a << endl;  // Prints the value of 'a' after the function call
    return 0;
}
