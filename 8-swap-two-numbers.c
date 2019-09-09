/*C progam to swap two numbers
  Author: abhijeet
  Created on 6 Sept, 2019, 05:19 PM
*/
#include <stdio.h>
main()
{
  int a,b,temp;
  printf("Enter Two Number to be swapped\nA: ");
  scanf("%d",&a);
  printf("B: ");
  scanf("%d",&b);
  printf("-----------------------------------\n");
  printf("1] A= %d\tB= %d\tTemp=%d",a,b,temp);
  temp=a;
  printf("\n2] A= %d\tB= %d\tTemp=%d",a,b,temp);
  a=b;
  printf("\n3] A= %d\tB= %d\tTemp=%d",a,b,temp);
  b=temp;
  printf("\n4] A= %d\tB= %d\tTemp=%d",a,b,temp);
  printf("\n-----------------------------------");
  printf("\nNumbers after Swapping are\nA: %d\nB: %d",a,b );
  getch();
}
