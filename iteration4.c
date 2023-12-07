#include <stdio.h>
int main()
{
    int i = 1;
    int count = 0;

    printf("enter times of jay ganesh:");
    scanf("%d", &count);

    while (i <= count)
    {
        printf("jay ganesh..\n");
        i++;
    }
    return 0;
}