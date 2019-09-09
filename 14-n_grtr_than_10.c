/*C progam to Check the number is greater than or less than 10
  Author: abhijeet
  Created on 10 Sept, 2019, 04:43 AM
*/
#include <stdio.h>
 main()
{
  int a;
  printf("Enter The number to be Checked\nA: ");
  scanf("%d",&a );
  if(a<10)
    {
      printf("%d is Smaller than 10",a);
    }
  else if (a>10)
    {
      printf("%d is Greater than 10",a);
    }
  else
    {
      printf("Number is equal to 10");
    }
  getch();
}
