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
    void gun()
    {
        cout << "inside base gun\n";
    }
    void sun()
    {
        
        cout << "inside base sun\n";
    }
    void run()
    {
        cout << "inside base gun\n";
    }
};

class Derived : public Base
{
public:
    int a, b;
    void gun()  //redefination
    {
        cout << "inside derived gun\n";
    }
    void run()  //redefination
    {
        cout << "inside derived run\n";
    }
};

int main()
{
    
    Base *bp = new Derived;    // UC
    bp->fun();
    bp->gun();
    bp->sun();
    bp->run();

    return 0;
}