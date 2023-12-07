#include<stdio.h>
int main()
{
    int standard = 0;

    printf("primary school portal\n");

    printf("enter your division\n");
    scanf("%d", &standard);

    //if else if ladder
    if(standard==1)
    {
        printf("your exam is at 1 PM\n");
    }
    else if(standard==2)
    {
        printf("your exam is at 2 PM\n");
    }
    else if (standard == 3)
    {
        printf("your exam is at 2 PM\n");
    }
    else if (standard == 4)
    {
        printf("your exam is at 2 PM\n");
    }
    else
    {
        printf("invalid standard\n");
    }

    return 0;
}