/*C progam to print * tree pattern 9X5 using nested for loop
  Author: abhijeet
  Created on 10 Sept, 2019, 09:20 PM
*/
#include <stdio.h>
int main()
{

  int i,j,k;
  /*
  printf("Enter The number ");
  scanf("%d",&n);
  */
  for (i=1;i<=5;i++)
    {

      for (j=1;j<=9;j++)
        {
          if (j<=6-i || j>=4+i )
          {
            printf("*");

          }
          else
          {
            printf(" ");

          }
        }
        printf("\n");
    }
  return 0;
}
