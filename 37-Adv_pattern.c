/*C progam to print * tree pattern 9X5 using nested for loop
o/p:

    1	2	3	4	5	6	7

1	  A	B	C	D	C	B	A
2 	A	B	C		C	B	A
3 	A	B				B	A
4	  A						A


  Author: abhijeet
  Created on 10 Sept, 2019, 11:51 PM
*/
#include <stdio.h>
int main()
{

  int i,j;
  char k='A';
  /*
  printf("Enter The number ");
  scanf("%d",&n);
  */
  for (i=1;i<=4;i++)
    {
      k='A';
      for (j=1;j<=7;j++)
        {
          if (j<=5-i || j>=3+i)
          {
            printf("%c",k);

            j<4?k++:k--;
          }
          else
          {
            printf(" ");
            if (k==4)
                k--;
          }
        }
        printf("\n");
    }
  return 0;
}
