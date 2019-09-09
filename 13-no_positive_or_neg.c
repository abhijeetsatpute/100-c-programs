/*C progam to Check the number is positive or negative
  Author: abhijeet
  Created on 10 Sept, 2019, 04:41 AM
*/
#include <stdio.h>
 main()
{
  int a,b;
  printf("Enter The number to be Checked\nA: ");
  scanf("%d",&a );
  if(a<0)
    {
      printf("%d is Negative",a);
    }
  else if (a>0)
    {
      printf("%d is Positive",a);
    }
  else
    {
      printf("Number is zero");
    }
  getch();
}
