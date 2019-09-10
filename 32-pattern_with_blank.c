/*C progam to print * square using nested for loop
  Author: abhijeet
  Created on 10 Sept, 2019, 08:06 PM
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
          if (j<=i)
            printf("*");
          else
            printf(" ");
        }
        printf("\n");
    }
  return 0;
}
