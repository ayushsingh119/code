//======================= FUNCTION ====================//

// #include <iostream>
// using namespace std;

// int sum(int a, int b)
// {
//     int c = a + b;
//     return c;
// }
// int main()
// {
//     int num1, num2;
//     cout << "Enter the first number: " << endl;
//     cin >> num1;
//     cout << "Enter the second number: " << endl;
//     cin >> num2;
//     // cout << "The sum is: " << c << endl;
//     cout << "The sum is: " << sum(num1, num2) << endl; // 10 after taking input 5 and 5
//     cout << "The sum is: " << sum(45, 56) << endl;     // 101

//     return 0;
// }

//============================================================================================//

//============== FUNCTION PROTOTYPE =============//

#include <iostream>
using namespace std;

int sum(int a, int b); // function name (arguments).  here this is formal parameter a and b //
void g();
int main()
{
    int num1, num2;
    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;
    cout << "The sum is: " << sum(num1, num2) << endl; // here this is actual parameter num1 and num2 which we are going to give //
    cout << "The sum is: " << sum(45, 55) << endl;

    g();
    return 0;
}

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

void g()
{
    cout << "Hello World!" << endl;
}