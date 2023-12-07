#include<stdio.h>
int main()
{
    int X = 11;

    const int Y = 11;   //read only variable

    X++;   //allowed
    X--;   //allowed
    X = 21;  //allowed

    // Y++;   not allowed
    // Y--;   not allowed
    // Y=21;  not allowed

    return 0;
}