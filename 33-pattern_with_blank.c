/*C progam to print * square using nested for loop
  Author: abhijeet
  Created on 10 Sept, 2019, 08:06 PM
*/
#include <stdio.h>
int main()
{

  int i,j;
  /*
  printf("Enter The number ");
  scanf("%d",&n);
  */
  for (i=1;i<=5;i++)
    {
      for (j=1;j<=5;j++)
        {
          if (i<=j)
            printf("*");
          else
            printf(" ");
        }
        printf("\n");
    }
  return 0;
}
