/*C progam to check number is Armstrong number or not
                narcissistic number is a number that is
                 the sum of its own digits each raised
                  to the power of the number of digits it has.
  Author: abhijeet
  Created on 10 Sept, 2019, 09:32 AM
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a,rem,sum=0,temp;
  printf("Enter the number : ");
  scanf("%d",&a );
  temp=a;
  while (a>0)
    {
      rem=a%10;
      sum+=rem*rem*rem;
      a=a/10;
    }
  if (sum==temp)
    printf("Number is Armstrong");
  else
    printf("Number is not Armstrong");
  return 0;
}
