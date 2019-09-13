/*C progam -Swapping two numbers using pointers

Author: abhijeet
  Created on 13 Sept, 2019, 01:43 PM
*/
#include<windows.h>
main()
{
  int a,b;
  printf("Enter two numbers to be swapped: ");
  scanf("%d%d",&a,&b);
  swap(&a,&b);
  printf("a:%d b:%d",a,b);
  getch();
}

swap(int *x,int *y)
{
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}
