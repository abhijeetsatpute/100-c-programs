/*C progam - Dynamic memory allocation using malloc calloc

Author: abhijeet
  Created on 14 Sept, 2019, 09:32 AM
*/
#include<stdio.h>
void main()
{
  int *p;
  p = malloc(4);
  *p =4;
  printf("%d",*p );
  free(p);
  getch();
}
