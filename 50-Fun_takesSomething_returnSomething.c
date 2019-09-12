/*C progam -functions take something return something

Author: abhijeet
  Created on 12 Sept, 2019, 10:34 AM
*/
#include<stdio.h>
int add(int,int);
void main()
{
    int x,y,s;
    printf("Enter two numbers");
    scanf("%d%d",&x,&y);
    s=add(x,y);
    printf("%d",s);
    getch();
  }

int add(int a,int b)
{
  return (a+b);
}
