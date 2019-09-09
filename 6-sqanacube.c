/*C progam to find square and cube of a number
  Author: abhijeet
  Created on 9 Sept, 2019, 04:45 PM
*/
#include <stdio.h>
#include <stdlib.h>
main()
{
  int n,sq,cube;
  printf("Enter the Number: ");
  scanf("%d",&n );
  sq=n*n;
  cube=n*n*n;
  printf("Square : %d \nCube : %d",sq,cube );
  getch();
}
