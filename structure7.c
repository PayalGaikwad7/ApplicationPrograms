#include <stdio.h>

struct Demo
{
    int i;
    float f;
    struct hello
    {
        int no;
        float d;
    };
};

int main()
{
    
    struct Demo dobj;
    printf("size of object is : %d\n", sizeof(dobj));
    

    return 0;
}