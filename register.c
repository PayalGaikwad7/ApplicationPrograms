#include<stdio.h>

void Display()
{
    register int no = 11; // register int no=11;
    register int i;        // register int i;
    register int j = 21;

    printf("value of no:%d\n", no);
    printf("value of i:%d\n", i);
}

int main()
{
    Display();

   // printf("%d", no);

    return 0;
}