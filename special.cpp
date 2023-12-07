#include<iostream>
using namespace std;
class Demo       //class definition
{
    public:
        int i;   //i and j are characteristics
        int j;

        Demo()   //default constructor
        {
            cout << "inside default constructor\n";
            i = 0;
            j = 0;
        }

        // int A=11;
        // int B=21;
        Demo(int A, int B)  //parameterized constructor
        {
            cout << "inside parameterized constructor\n";
            i = A;
            j = B;
        }

        // Demo &ref = obj2;
        Demo(Demo &ref)  //copy constructor
        {
            cout << "inside copy constructor\n";
            i = ref.i;
            j = ref.j;
        }

        ~Demo()
        {
            cout << "inside destructor\n";
        }
};

int main()
{
        Demo obj1;
        Demo obj2(11, 21);
        Demo obj3(obj2);

        return 0;
}