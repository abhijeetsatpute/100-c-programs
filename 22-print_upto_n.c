/*C progam to print numbers upto n using while loop
  Author: abhijeet
  Created on 10 Sept, 2019, 06:34 AM
*/
#include <stdio.h>
#include <stdlib.h>
main()
{
  int a,i=1;
  printf("Enter N :");
  scanf("%d",&a);
  while (i<=a)
    {
      printf("%d\n",i );
      i++;
    }
  getch();
}
