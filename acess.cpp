#include<iostream>
using namespace std;

class demo
{
        int i;
    public:
        int j;
    private:
        int k;
    protected:
        int a;
    public:
        demo()
        {
            i = 10;
            j = 20;
            k = 30;
            a = 40;
        }
        void display()
        {
            cout << "Value of i :" << i << "\n";    //A
            cout << "Value of j :" << j << "\n";    //A
            cout << "Value of k :" << k << "\n";    //A
            cout << "Value of a :" << a << "\n";    //A
        }
};

class hello : public demo
{
    public:
        void helloDisplay()
        {
            //cout << "Value of i :" << i << "\n"; // NA
            cout << "Value of j :" << j << "\n"; // A
            //cout << "Value of k :" << k << "\n"; // NA
            cout << "Value of a :" << a << "\n"; // A
        }
};

int main()
{
    hello hobj;
    hobj.helloDisplay();

    return 0;
}