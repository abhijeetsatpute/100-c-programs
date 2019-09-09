/*C progam to Check the number is Even or Odd
  Author: abhijeet
  Created on 10 Sept, 2019, 04:45 AM
*/
#include <stdio.h>
 main()
{
  int a;
  printf("Enter The number to be Checked\nA: ");
  scanf("%d",&a );
  if(a%2==0)
    {
      printf("%d is Even",a);
    }
  else
    {
      printf("%d is Odd",a);
    }
  getch();
}
