#include<stdio.h>

void Display()
{
    int no = 11;       // auto int no=11;
    int i;             // auto int i;
    auto int j = 21;

    printf("value of no:%d\n", no);
    printf("value of i:%d\n", i);
}

int main()
{
    Display();

   // printf("%d", no);

    return 0;
}