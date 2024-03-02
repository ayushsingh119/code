//============ BREAK ============//

// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int i = 0; i < 40; i++)
//     {
//         cout << i << endl;
//         if (i == 2)
//         {
//             break;
//         }
//     }
//     return 0;
// }

//=============== CONTINUE =============//

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 40; i++)
    {

        if (i == 2) // only this condition will not run //
        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}
