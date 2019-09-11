/*C progam to print * tree pattern 4x7 using nested for loop
o/p:

  1	2	3	4
1	x
2	x	x
3	x	x	x
4	x	x	x	x
5	x	x	x
6	x	x
7	x


Author: abhijeet
  Created on 11 Sept, 2019, 11:13 AM
*/
#include <stdio.h>
int main()
{

  int i,j,k=0;
  /*
  printf("Enter The number ");
  scanf("%d",&n);
  */
  for (i=1;i<=7;i++)
    {
        i<5?k++:k--;
      for (j=1;j<=4;j++)
        {
          if (j<=k)
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
