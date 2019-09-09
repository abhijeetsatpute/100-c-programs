/*C progam to Compare two numbers
  Author: abhijeet
  Created on 10 Sept, 2019, 04:37 AM
*/
#include <stdio.h>
 main()
{
  int a,b;
  printf("Enter The two numers to be compared\nA: ");
  scanf("%d",&a );
  printf("B: ");
  scanf("%d",&b );
  if(a<b)
    {
      printf("Largest Value is %d",b);
    }
  else
    {
      printf("Largest Value is %d",a);
    }
  getch();
}
