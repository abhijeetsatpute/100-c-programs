/*C progam to Check the number Divisible by 5 or not
  Author: abhijeet
  Created on 10 Sept, 2019, 04:47 AM
*/
#include <stdio.h>
 main()
{
  int a;
  printf("Enter The number to be Checked\nA: ");
  scanf("%d",&a );
  if(a%5==0)
    {
      printf("%d is Divisible by 5",a);
    }
  else
    {
      printf("%d is Not divisible by 5",a);
    }
  getch();
}
