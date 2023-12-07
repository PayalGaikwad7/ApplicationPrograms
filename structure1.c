#include<stdio.h>

struct demo
{
    int no;
    float f;
    double d;
    int x;
};

int main()
{
    
    struct demo obj1;
    struct demo obj2;

    printf("size of structure is %d\n", sizeof(obj));
    //use %lu to ignore warnings

    obj1.no = 11;
    obj1.f = 10.5;
    obj1.x = 21;
    obj1.d = 20.5;
    
    obj2.no = 51;
    obj2.f = 50.5;
    obj2.x = 101;
    obj2.d = 60.5;


    return 0;
}