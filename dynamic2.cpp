#include<iostream>
using namespace std;

class demo
{
    public:
        int i,j,k;
        demo()
        {
            cout << "Inside constructor\n";
        }
        ~demo()
        {
            cout << "Inside destructor\n";
        }
        void display()
        {
            cout << "Inside display\n";
        }
};

int main()
{
    demo obj1;
    obj1.display();

    demo *ptr = new demo;
    // demo *ptr=(demo *)malloc(sizeof(demo));

    ptr->display();

    delete ptr;
    // free(ptr);

    return 0;
}