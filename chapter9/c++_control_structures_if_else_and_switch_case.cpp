//=============== IF ELSE =================//

// #include <iostream>
// using namespace std;

// int main()
// {
//     int age;
//     cout << "Tell me your age: " << endl;
//     cin >> age;

//     if ((age < 18) && (age > 0))
//     {
//         cout << "You can't come to my party!" << endl;
//     }
//     else if (age == 18)
//     {
//         cout << "You are kid and you will get a kid pass to the party!" << endl;
//     }
//     else if (age < 1)
//     {
//         cout << "Yor are not yet born!" << endl;
//     }
//     else
//     {
//         cout << "You can come to my party!" << endl;
//     }
//     return 0;
// }

//===========================================================================================================//

//============ SWITCH CASE ==============//

#include <iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2;
    cout << "Enter opertors: +, -, *, /" << endl;
    cin >> op;
    cout << "Enter the num1 and num2: " << endl;
    cin >> num1 >> num2;

    switch (op)
    {
    case '+':
        cout << "num1 + num2 is = " << num1 + num2;
        break;

    case '-':
        cout << "num1 - num2 is = " << num1 - num2;
        break;

    case '*':
        cout << "num1 * num2 is = " << num1 * num2;
        break;

    case '/':
        cout << "num1 / num2 is = " << num1 / num2;
        break;
    default:
        cout << "Operator is not correct!" << endl;
        break;
    }
    return 0;
}
