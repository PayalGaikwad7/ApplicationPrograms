#include<stdio.h>

int i;
int j = 11;
extern int no;

int main()
{
    printf("value of i:%d\n", i);  //0
    printf("value of j:%d\n", j);  //11
    printf("value of no:%d\n",no);

    return 0;
}

//gcc main.c helper.c -o myexe
//./myexe
//sequence doesn`t matter