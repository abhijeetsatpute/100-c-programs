/*C progam for conditional operators
                                      (condition) ? if_true_do : else_this ;
  Author: abhijeet
  Created on 9 Sept, 2019, 06:14 AM
*/
#include <stdio.h>
#include <stdlib.h>
main()
{
  int a,b;
  printf("Enter two values :");
  scanf("%d%d",&a,&b);
  (a>b)?printf("%d is greater",a):printf("%d is greater",b);
  //Assign values directly using conditional operators
  printf("\n%d is greater",(a>b)?a:b);
  getch();
}
