/*C progam to print sum of digits of entered number
  Author: abhijeet
  Created on 10 Sept, 2019, 07:10 AM
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a,rem,sum=0;
  printf("Enter the number : ");
  scanf("%d",&a );
  while (a>0)
    {
      rem=a%10;
      sum+=rem;
      a=a/10;
    }
  printf("Sum of the Digits is : %d",sum);
  return 0;
}
