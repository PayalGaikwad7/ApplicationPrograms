#include <iostream>
using namespace std;

class demo
{
public:
    int i;
    int j;
    static int k;
    
    demo(int a = 10, int b = 20) // parameterised constructor with default arguments
    {
        i = a;
        j = b;
    }

    void display()
    {
        cout << "value of i : " << i << "\n";
        cout << "value of j : " << j << "\n";
    }
};

int demo::k = 111;

int main()
{
    cout << "value of k is : " << demo::k << "\n";

    demo obj1(11,21);
    //obj1.display();

    demo obj2(51,101);
    //obj1.display();

    demo obj3(121, 151);
    //obj1.display();

    cout << "size of object is : " << sizeof(obj1) << "\n";

    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}