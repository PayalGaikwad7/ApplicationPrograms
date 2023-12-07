#include<iostream>
using namespace std;

class hello
{
    public:
        void fun();
        void gun();
};
class demo
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        demo()
        {
            i = 10;
            j = 20;
            k = 30;
        }
        friend class hello;
};

//Return_value Class_name :: Function_name()
void hello :: fun()
{
    demo obj;
    cout << "Value of i : " << obj.i << "\n";
    cout << "Value of j : " << obj.j << "\n";
    cout << "Value of k : " << obj.k << "\n";
}

void hello ::gun()
{
    demo obj;
    cout << "Value of i : " << obj.i << "\n";
    cout << "Value of j : " << obj.j << "\n";
    cout << "Value of k : " << obj.k << "\n";
}

int main()
{
    hello hobj;
    hobj.fun();
    hobj.gun();

    return 0;
}