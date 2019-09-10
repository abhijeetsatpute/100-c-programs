/*C progam to print numbers upto n using do while loop reverse order
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
  i=a;
  do
    {
      printf("%d\n",i);
      i--;
    }
  while (i>=1);
  getch();
}
