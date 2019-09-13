/*C progam -Pointers

Author: abhijeet
  Created on 13 Sept, 2019, 01:11 PM
*/
#include<stdio.h>
int main()
{
    int a,b;
    int *p,*q;

    b=a=70;
    b=5;
    p=&a;
    q=&b;
    printf("%d\n",p);
    printf("%d\n",q);
    printf("%d\n",p-q);
    return 0;
}
