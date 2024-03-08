//=============== STRUCTURES ================//

// #include <iostream>
// using namespace std;

// struct employee
// {
//     int eId;
//     char favChar;
//     float salary;
// };

// int main()
// {
//     struct employee ram;
//     ram.eId = 1;
//     ram.favChar = 'c';
//     ram.salary = 120000;

//     cout << "The value is: " << ram.eId << endl;
//     cout << "The value is: " << ram.favChar << endl;
//     cout << "The value is: " << ram.salary << endl;

//     return 0;
// }

//==============================================================================================================//

// #include <iostream>
// using namespace std;

// typedef struct employee
// {
//     int eId;
//     char favChar;
//     float salary;
// } ep; // here this ep short form for calling the struct employee //

// int main()
// {
//     ep ram;
//     ram.eId = 1;
//     ram.favChar = 's';
//     ram.salary = 454546;

//     cout << "The value is: " << ram.eId << endl;
//     cout << "The value is: " << ram.favChar << endl;
//     cout << "The value is: " << ram.salary << endl;

//     return 0;
// }

//====================================================================================//

//======================== UNION ==================//

// #include <iostream>
// using namespace std;

// union money
// {
//     int rice;
//     char car;
//     float pound;
// };
// int main()
// {
//     union money m1; // here union can only acces one data at time if we try to acces all data  then it will put junk data so best practice is to use one data at a time //
//     m1.rice = 34;
//     // m1.car = 'c';
//     // m1.pound = 7465.47;

//     cout << m1.rice << endl;
//     // cout << m1.car << endl;
//     // cout << m1.pound << endl;
//     return 0;
// }

//=============================================================================================//

//==================== ENUM =====================//

#include <iostream>
using namespace std;

enum year
{
    Jan,
    Feb,
    Mar,
    Apr,
    May,
    jun,
    July,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec
};
int main()
{

    int i;
    for (int i = Jan; i <= Dec; i++)
    {
        cout << i << " ";
    }
    return 0;
}
