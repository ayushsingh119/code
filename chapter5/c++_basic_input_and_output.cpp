#include <iostream>
using namespace std;

int main()
{
    // << : This is called insertion operator //
    // >> : This is called extraction operator //

    int num1, num2;
    cout << "Enter the value of num1 : " << endl;
    cin >> num1;

    cout << "Enter the value of num2 : " << endl;
    cin >> num2;

    cout << "The sum is : " << num1 + num2;

    return 0;
}
