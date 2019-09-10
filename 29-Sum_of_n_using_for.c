/*C progam to print sum of n numbers using for
  Author: abhijeet
  Created on 10 Sept, 2019, 09:49 AM
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a,sum=0,i;
  printf("Enter the number : ");
  scanf("%d",&a );
  for (i=0;i<=a;i++)
    {
      printf("%d\t%d\n",i,sum);
      sum+=i;
    }
  return 0;
}
