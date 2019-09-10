/*C progam to print * tree pattern 9X5 using nested for loop
o/p:

   1
  121
 12321
1234321

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
  for (i=1;i<=4;i++)
    {
      k=1;
      for (j=1;j<=7;j++)
        {
          if (j>=5-i  && j<=3+i )
          {
            printf("%d",k);
            j<4?k++:k--;
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
