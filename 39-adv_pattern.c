/*C progam to print * tree pattern 4X4 using nested for loop
o/p:
	  1
	  1	2
	  1	2	3
	  1	2	3	4



  Author: abhijeet
  Created on 11 Sept, 2019, 01:22 AM
*/
#include <stdio.h>
main()
{
    int i,j,k=1;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=4;j++)
        {
            if(j<=i)
            {
                printf("%d",k++);
            }

            else
                printf(" ");
        }
        printf("\n");
    }
}
