#include<iostream>
using namespace std;

int main()
{
    int i = 10;
    const int j = 20;
    //const int k;
    const int k = 0;

    i++; // allowed
    // j++;  //NA

    return 0;
}