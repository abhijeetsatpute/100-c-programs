/*C progam to print the table of given number
  Author: abhijeet
  Created on 10 Sept, 2019, 09:43 AM
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a,i=1;
  printf("Enter the number : ");
  scanf("%d",&a );
  while (a<=10)
    {
      printf("\n%d X %d = %d",a,i,a*i);
      i++;
    }
  return 0;
}
