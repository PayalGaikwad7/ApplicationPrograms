#include <iostream>
using namespace std;

class Base
{
public:
    int i, j, k;
    void fun()
    {
        cout << "inside base fun\n";
    }
};

class Derived : public Base
{
public:
    int a, b;
    void gun()
    {
        cout << "inside derived gun\n";
    }
};

int main()
{
    Base *bp1 = new Base;   //NC
    Derived *dp1 = new Derived;  //NC
    Base *bp2 = new Derived;  //UC
    //Derived *dp2 = new Base;  //DC

    return 0;
}