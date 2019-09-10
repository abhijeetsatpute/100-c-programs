/*C progam to print sum of n numbers using for
  Author: abhijeet
  Created on 10 Sept, 2019, 09:49 AM
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a,sum=0,i,new;
  printf("Enter the number : ");
  scanf("%d",&a );
  for (i=1;i<=a;i++)
    {
      scanf("%d",&new);
      sum+=new;
    }
  printf("%d is the sum",sum);
  return 0;
}
