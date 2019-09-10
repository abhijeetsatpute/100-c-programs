/*C progam to print * tree pattern 9X9 using nested for loop
o/p:

  1	2	3	4	5	6	7	8	9
1					X
2				X	X	X
3			X	X	X	X	X
4		X	X	X	X	X	X	X
5	X	X	X	X	X	X	X	X	X
6		X	X	X	X	X	X	X
7			X	X	X	X	X
8				X	X	X
9					X

  Author: abhijeet
  Created on 11 Sept, 2019, 01:10 AM
*/
#include <stdio.h>
main()
{
    int i,j,k=0;
    for(i=1;i<=9;i++)
    {
        i<=4?k++:k--;
        for(j=1;j<=9;j++)
        {
            if(j>=6-k && j<=4+k)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
