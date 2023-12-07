#include <stdio.h>
int main()
{
    int i = 1;
    int count = 0;

    printf("enter times of jay ganesh:");
    scanf("%d", &count);

    do
    {
        printf("jay ganesh..\n");
        i++;
    }while (i <= count);

    return 0;
}