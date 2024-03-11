// #include <iostream>
// using namespace std;

// class Y;
// class X
// {
//     int data;

// public:
//     friend void add(X, Y);
//     void setValue(int value)
//     {
//         data = value;
//     }
// };

// class Y
// {
//     int num;

// public:
//     friend void add(X, Y);
//     void setValue(int value)
//     {
//         num = value;
//     }
// };

// void add(X o1, Y o2)
// {
//     cout << "summing data of X and Y objects gives me: " << o1.data + o2.num << endl;
// }

// int main()
// {
//     X a1;
//     a1.setValue(3);

//     Y b1;
//     b1.setValue(5);

//     add(a1, b1);
//     return 0;
// }

//===============================================================================================================//

//================= NEXT EXAMPLE for swap class c1 value to class c2 and vice versa=================//

#include <iostream>
using namespace std;

class c2;

class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int a)
    {
        val1 = a;
    }

    void display(void)
    {
        cout << val1 << endl;
    }
};

class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int a)
    {
        val2 = a;
    }

    void display(void)
    {
        cout << val2 << endl;
    }
};

void exchange(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    c1 oc1;
    oc1.indata(4);

    c2 oc2;
    oc2.indata(5);

    exchange(oc1, oc2);
    cout << "The value of c1 after exchange becomes: ";
    oc1.display();
    cout << "The value of c2 after exchange becomes: ";
    oc2.display();

    return 0;
}