#include <iostream>
using namespace std;

class Base
{
public:
    int i, j, k;
    virtual void fun()  //1000
    { cout << "inside base fun\n"; }
    virtual void gun()  //2000
    { cout << "inside base gun\n"; }
    void sun()  //3000
    { cout << "inside base sun\n"; }
    void run()  //4000
    { cout << "inside base gun\n"; }
};

class Derived : public Base
{
public:
    int a, b;
    virtual void gun() // redefination
    { cout << "inside derived gun\n"; }  //5000
    void run() // redefination
    { cout << "inside derived run\n"; }  //6000
    virtual void mun()  // redefination
    { cout << "inside derived mun\n"; } // 7000
};

int main()
{
    cout << sizeof(Base) << "\n";
    cout << sizeof(Derived) << "\n";

    Base *bp = new Derived; // UC
    bp->fun();
    bp->gun();
    bp->sun();
    bp->run();

    return 0;
}