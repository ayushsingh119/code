//============== INLINE FUNCTION ====================//

// #include <iostream>
// using namespace std;

// inline int product(int a, int b)
// {
//     return a * b; // it just reduce the time of write  code or in line //
// }
// int main()
// {
//     int a, b;
//     cout << "Enter the value of a and b " << endl;
//     cin >> a >> b;
//     cout << "The product of a and b is: " << product(a, b) << endl;

//     return 0;
// }

//====================================================================================================//

//=================== DEFAULT ARGUMENT ==========================//

// #include <iostream>
// using namespace std;
// float moneyReceived(int currentMoney, float factor = 1.04)  // default argument and it will always put in second argument section or portion //
// {
//     return currentMoney * factor;
// }

// int main()
// {
//     int money = 100000;
//     cout << "If you have " << money << " Rs in your bank account, you will receive " << moneyReceived(money) << " Rs after 1 year." << endl;
//     cout << "For VIP: If you have " << money << " Rs in your bank account, you will receive " << moneyReceived(money, 1.1) << " Rs after 1 year." << endl;
//     return 0;
// }

//=================================================================================================================//

//========================== CONSTANT  ARGUMENT =======================//

#include <iostream>
using namespace std;
void printValue(const int x)
{
    // int x = 5; // if we use this code then it will throw an error because we use the const function //
    cout << "The value is: " << x << endl;
}
int main()
{
    int a = 4;
    printValue(a);
    return 0;
}