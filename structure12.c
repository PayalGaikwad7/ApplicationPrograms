#include <stdio.h>
#pragma pack(1)
union Demo
{
    int i;
    char ch;
    float f;
    double d;
};

int main()
{
    union Demo obj;
    printf("size of object is:%d\n", sizeof(obj));

    obj.f = 90.99;
    printf("%f\n", obj.f);

    obj.i = 11;
    printf("%d\n", obj.i);

    return 0;
}