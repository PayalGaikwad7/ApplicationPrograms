#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[5];      //Static Mem 
    float fValue;    //Static Mem
    double Brr[4];   //Static Mem

    int iSize = 0;
    int *ptr = NULL;

    printf("Enter the size of array : \n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));
    
    ptr[0] = 10;
    ptr[1] = 11;
    ptr[2] = 12;

    free(ptr);

    return 0;
}