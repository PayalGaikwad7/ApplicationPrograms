#include<iostream>
using namespace std;

class demo
{
    public:
        int i;
        const int j = 10;
        const int k = 20;

        //parameterized constructor
        demo(int a, int b, int c) : j(b), k(c)
        {
            i = a;
            //j = b;
            //k = c;
        }
};

int main()
{
    demo obj(11,21,51);
    cout << "Value of i : " << obj.i << "\n";
    cout << "Value of j : " << obj.j << "\n";
    cout << "Value of k : " << obj.k << "\n";

    obj.i++;  //A
    //obj.j++;  NA
    //obj.k++;  NA

    return 0;
}