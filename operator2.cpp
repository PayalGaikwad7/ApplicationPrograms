#include <iostream>
using namespace std;

class demo
{
public:
    int i, j;
    demo(int a = 10, int b = 20)
    {
        i = a;
        j = b;
    }
    demo operator+(demo op2)
    {
        return demo(this->i + op2.i, this->j + op2.j);
        // return demo(11+5,21+6);
        // return demo(16,27);
    }
};

int main()
{
    demo obj1(11, 21);
    demo obj2(5, 6);
    demo obj(0, 0);
    obj = obj1 + obj2; // obj=obj1.+(obj2);

    cout << obj.i << "\n";
    cout << obj.j << "\n";

    return 0;
}