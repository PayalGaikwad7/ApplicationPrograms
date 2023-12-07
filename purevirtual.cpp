#include<iostream>
using namespace std;

class base
{
    public:
        int i, j, k;

        void fun()                       //concrete method
        {
            cout << "Base fun\n";
        }
        virtual void gun()                //concrete method
        {
            cout << "Base gun\n";
        }
        virtual int Addition(int no1, int no2) = 0;  //abstract method
};

class derived : public base
{
    public:
        int a, b;
        void gun()                       //concrete
        {
            cout << "Derived gun\n";
        }
        virtual void sun()               //concrete
        {
            cout << "Derived sun\n";
        }
        int Addition(int no1,int no2)    //concrete
        {
            return no1 + no2;
        }
};

int main()
{
        //base bobj;
        base *bp = new derived;
        bp->fun();
        bp->gun();
        int Ret = 0;
        Ret = bp->Addition(10, 11);
        cout << "Addition is : " << Ret << "\n";

        return 0;
}