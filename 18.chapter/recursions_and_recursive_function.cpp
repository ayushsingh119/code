// #include <iostream>
// using namespace std;

// int factorial(int n)
// {
//     if (n <= 1)
//     {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }
// int main()
// {
//     int a;
//     cout << "Enter a number: " << endl;
//     cin >> a;
//     cout << "The factorial of " << a << " is: " << factorial(a) << endl;
//     return 0;
// }

//==================== FIBONACCI SERIES =================/
//=== FINDING THE NTH TERM OF FIBONACCI IS WHAT =====//
#include <iostream>
using namespace std;

int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}
int main()
{
    int a;
    cout << "Enter the number at you want to write fibonacci series: " << endl;
    cin >> a;
    cout << "The term in fibonacci sequence at position " << a << " is: " << fib(a) << endl;
    return 0;
}

//========== OTHER WAY OF CREATING FIBONACCI SERIES ========//

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 0;
//     int b = 1;
//     int c;
//     int n;
//     cin >> n;
//     cout << a << " " << b << " ";
//     for (int i = 1; i <= n; i++)
//     {
//         c = a + b;
//         cout << c << " ";
//         a = b;
//         b = c;
//     }
//     return 0;
// }
