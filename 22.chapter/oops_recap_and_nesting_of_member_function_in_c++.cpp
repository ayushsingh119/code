// OOPs : Classes and Objects //
// C++ : initially called as C with classes by stroustroup //
// class : extension of structures (in C) //
/* structures had limitations :
    members are public
    No methods
*/
// classes = structures + more //
// classes can have methods and properties //
// classes can make few member as private and few as public //
// structure in c++ are typedefed //
/* you can declare objects along with the class declaration:
   class Employee{
     //class definition//
   }  harry, rohan, lovish;
*/
// harry.salary = 6 make no sense if salary is private //

// #include <iostream>
// #include <string>
// using namespace std;

// class binary
// {
//     string s; // by default it is private without assign public or private //

// public:
//     void read();
//     void chk_bin();
//     void ones();
//     void display();
// };

// void binary ::read(void)
// {
//     cout << "Enter a binary number: " << endl;
//     cin >> s;
// }

// void binary ::chk_bin(void)
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) != '0' && s.at(i) != '1')
//         {
//             cout << "Incorrect binary format: " << endl;
//             exit(0);
//         }
//     }
// }

// void binary ::ones(void)
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) == '0')
//         {
//             s.at(i) = '1';
//         }
//         else
//         {
//             s.at(i) = '0';
//         }
//     }
// }

// void binary ::display(void)
// {
//     cout << "Displaying your ones: " << endl;
//     for (int i = 0; i < s.length(); i++)
//     {
//         cout << s.at(i);
//     }
//     cout << endl;
// }

// int main()
// {
//     binary b;
//     b.read();
//     b.chk_bin();
//     b.display();
//     b.ones();
//     b.display();
//     return 0;
// }

//============= NESTING OF MEMBER FUNCTION ================//

#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s; // by default it is private without assign public or private //

public:
    void read();
    void chk_bin();
    void ones();
    void display();
};

void binary ::read(void)
{
    cout << "Enter a binary number: " << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format: " << endl;
            exit(0);
        }
    }
}

void binary ::ones(void)
{
    chk_bin(); // This is called nested function // now here if we put this in ones function it will check the binary cause we call the chk_bin in the ones function //
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Displaying your ones: " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones();
    b.display();
    return 0;
}
