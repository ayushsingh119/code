// #include <iostream>
// using namespace std;

// int main()
// {
//     int marks[] = {23, 45, 56, 89};
//     cout << marks[0] << endl;
//     cout << marks[1] << endl;
//     cout << marks[2] << endl;
//     cout << marks[3] << endl;
//     cout << endl;

//     //================================================================//

//     int mathmarks[4];
//     mathmarks[0] = 2278;
//     mathmarks[1] = 738;
//     mathmarks[2] = 378;
//     mathmarks[3] = 578;
//     cout << mathmarks[0] << endl;
//     cout << mathmarks[1] << endl;
//     cout << mathmarks[2] << endl;
//     cout << mathmarks[3] << endl;
//     cout << endl;

//     //===================================================================================//

//     int mark[4] = {3, 7, 9, 8};
//     for (int i = 0; i < 4; i++)
//     {
//         cout << "The value at index " << i << " is " << mark[i] << endl;
//     }
//     return 0;
// }

//========================================================================================================//

//========== POINTERS AND ARRAYS =============//

#include <iostream>
using namespace std;

int main()
{
    int marks[4] = {23, 45, 56, 89};
    int *p = marks; // here we don't need to type &marks to make pointer of an array, we can make it just by type this (int* p = marks). we use this way to make pointer of an array//

    cout << "The value of marks[0] is: " << *p << endl;       // 23
    cout << "The value of marks[1] is: " << *(p + 1) << endl; // 45
    cout << "The value of marks[2] is: " << *(p + 2) << endl; // 56
    cout << "The value of marks[3] is: " << *(p + 3) << endl; // 89
    return 0;
}
