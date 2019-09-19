/*
https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem
*/
#include "stdio.h"
#include <string.h>
int main()
{
    int n,i,m=0,k,l;
    scanf("%d",&n);
    int arr[n];
    char and[20];


    //AND bitwise
    for(i=1;i<=n;i++)
    {
        m++;
        for(k=n;k>m;k--)
            printf("%d",k&m);
    }m=0;
    printf("\n");
//string to array

    //OR bitwise
    for(i=1;i<=n;i++)
    {
        m++;
        for(k=n;k>m;k--)
            printf("%d",k|m);
    }m=0;
    printf("\n");
//string to array

    //X-OR bitwise
    for(i=1;i<=n;i++)
    {
        m++;
        for(k=n;k>m;k--)
            printf("%d",k^m);
    }
//string to array
    return 0;
}
