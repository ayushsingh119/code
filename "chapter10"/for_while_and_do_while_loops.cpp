//============== FOR LOOP ================//

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the value of n: " << endl;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << i << endl;
//     }
//     return 0;
// }

//===========================================================================================================================//

// //============ WHILE LOOP ================//

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the value of n: " << endl;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         cout << i << endl;
//         i++;
//     }
//     return 0;
// }

//===========================================================================================================================//

//============ DO WHILE LOOP ================//

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    int i = 1;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= n);
    return 0;
}
