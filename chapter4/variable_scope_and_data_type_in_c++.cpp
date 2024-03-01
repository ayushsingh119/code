// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 4, b = 5;
//     cout << "This is chapter4,here the value of a is : " << a << ". The value of b is : " << b << endl;

//     float pi = 3.14;
//     char c = 'u';
//     cout << "The value of pi is : " << pi << endl;
//     cout << "The value of c is : " << c << endl;
//     return 0;
// }

//=========================================================================//

//====== LOCAL AND GLOBAL VARIABLE =======//
#include <iostream>
using namespace std;

int glo = 6; // global variable //
void sum()
{
    int a;
    cout << glo << endl;
}
int main()
{
    int glo = 9; // this is local variable of same name of globla vriable but precedence of local is higher than global in same name of varible and we can do name both as a same name //
    glo = 78;    // update the value of glo variable//
    sum();       // here it will print the global value as function written //
    cout << glo << endl;

    cout << boolalpha;
    bool is_true = true;
    cout << is_true << endl;
    return 0;
}
