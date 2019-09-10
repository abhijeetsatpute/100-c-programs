/*C progam to print * tree pattern 7X4 using nested for loop
o/p:

  1	2	3	4	5	6	7
1				A
2			B	B	B
3		C	C	C	C	C
4	D	D	D	D	D	D	D

Author: abhijeet
  Created on 11 Sept, 2019, 01:32 AM
*/
#include <stdio.h>
main ()
{
    int i,j;
    char k=64;
    for(i=1;i<=4;i++)
    {
        k++;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
            {
                printf("%c",k);
            }

            else
                printf(" ");
        }
        printf("\n");
    }
}
