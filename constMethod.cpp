#include <iostream>
using namespace std;

class demo
{
public:
    int i;
    int j;
    int k;

    // parameterized constructor
    demo(int a, int b, int c) : j(b), k(c)
    {
        i = a;        j = b;       k = c;
    }
    void fun()
    {
        i++;  
        j++;  
        k++;
    }
    void gun(int x, const int) const
    {
        int no1 = 10;
        const int no2 = 20;
        x++;    //A
        //y++;    //NA
        no1++;  //A
        //no2++;  //NA
        //i++;    //NA
        //j++;    //NA
        //k++;    //NA
    }
};

int main()
{
    demo obj(11, 21, 51);
    obj.fun();
    obj.gun(51, 101);

    const demo obj2(11, 21, 51);
    //obj2.fun();
    obj2.gun(51, 101);

    return 0;
}