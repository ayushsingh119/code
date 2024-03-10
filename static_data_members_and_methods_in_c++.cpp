// #include <iostream>
// using namespace std;

// class Employee
// {
//     int id;
//     int count;

// public:
//     void setData(void)
//     {
//         cout << "Enter the id: " << endl;
//         cin >> id;
//     }
//     void getData(void)
//     {
//         cout << "The id of this employee is: " << id << endl;
//     }
// };
// int main()
// {
//     Employee supernova, steve, sam;
//     // supernova.id = 1; // can't do this because it is private //
//     // supernova.count = 1; // can't do this because is is private //
//     supernova.setData();
//     supernova.getData();

//     steve.setData();
//     steve.getData();

//     sam.setData();
//     sam.getData();

//     return 0;
// }

//=========================================================================================================//

//============ STATIC DATA MEMBER =============//

// #include <iostream>
// using namespace std;

// class Employee
// {
//     int id;           // class variable //
//     static int count; // static variable or static memeber by default it start with zero //

// public:
//     void setData(void)
//     {
//         cout << "Enter the id: " << endl;
//         cin >> id;
//         count++;
//     }
//     void getData(void)
//     {
//         cout << "The id of this employee is: " << id << " and this is employee number: " << count << endl;
//     }
// };

// int Employee ::count = 1000; //here we can write this way to initialize with 1000 and if not write this then it will initialize with default value zero, count is the static data member of class Employee. //
// int main()
// {
//     Employee supernova, steve, sam;
//     // supernova.id = 1; // can't do this because it is private //
//     // supernova.count = 1; // can't do this because is is private //
//     supernova.setData();
//     supernova.getData();

//     steve.setData();
//     steve.getData();

//     sam.setData();
//     sam.getData();

//     return 0;
// }

//=========================================================================================================//

//============ STATIC DATA FUNCTION =============//
// Static Function are those function which only can access the static variable //

#include <iostream>
using namespace std;

class Employee
{
    int id;           // class variable //
    static int count; // static memeber by default it start with zero //

public:
    void setData(void)
    {
        cout << "Enter the id: " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is: " << id << " and this is employee number: " << count << endl;
    }

    static void getCount(void)
    {
        cout << "The value of count is: " << count << endl;
    }
};

int Employee ::count; // here we can write this way to initialize with 1000 and if not write this then it will initialize with default value zero, count is the static data member of class Employee. //
int main()
{
    Employee supernova, steve, sam;
    // supernova.id = 1; // can't do this because it is private //
    // supernova.count = 1; // can't do this because is is private //
    supernova.setData();
    supernova.getData();
    Employee::getCount();

    steve.setData();
    steve.getData();
    Employee::getCount();

    sam.setData();
    sam.getData();
    Employee::getCount();

    return 0;
}