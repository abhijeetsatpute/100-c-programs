/*C progam to print * square using nested for loop
  Author: abhijeet
  Created on 10 Sept, 2019, 04:39 PM
*/
#include <stdio.h>
int main()
{
  int n,i,j;
  printf("Enter The number ");
  scanf("%d",&n);
  for (i=1;i<=n;i++)
    {
      for (j=1;j<=n;j++)
        {
          printf("*");
        }
        printf("\n");
    }
  return 0;
}
