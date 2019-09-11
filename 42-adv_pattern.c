/*C progam to print * tree pattern 7X4 using nested for loop
o/p:

  1	2	3	4	5	6	7	8	9	10
1	A	B	C	D	E	E	D	C	B	A
2	A	B	C	D			D	C	B	A
3	A	B	C					C	B	A
4	A	B							B	A
5	A									A


Author: abhijeet
  Created on 11 Sept, 2019, 11:13 AM
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
  for (i=1;i<=5;i++)
    {
      k='A';
      for (j=1;j<=10;j++)
        {
          if (j<=6-i || j>=5+i)
          {
            printf("%c",k);

            j<6?k++:k--;
          }
          else
          {
            printf(" ");
            if (k==6)
                k='E';
                k--;
          }
        }
        printf("\n");
    }
  return 0;
}
