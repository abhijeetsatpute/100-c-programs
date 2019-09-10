/*C progam to print entered number in reverse
  Author: abhijeet
  Created on 10 Sept, 2019, 07:05 AM
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a,rem;
  printf("Enter the number : ");
  scanf("%d",&a );
  while (a>0)
    {
      rem=a%10;
      printf("%d",rem);
      a=a/10;
    }

  return 0;
}
