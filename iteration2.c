#include <stdio.h>

int main()
{
    // loop counter
    int i = 0;
    int count = 0;

    printf("enter no of times u want to display jay ganesh on screen:");
    scanf("%d", &count);

    for (i = 1; i <= count; i++)
    {
        printf("jay ganesh..\n");
    }

    return 0;
}