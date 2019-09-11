/*C progam to find factorial of given number

Author: abhijeet
  Created on 11 Sept, 2019, 12:04 PM
*/
#include <stdio.h>
main()
{

  int i,n,fact=1;
  printf("Enter the number for factorial : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      fact*=i;
  }
  printf("factorial Of %d = %d",n,fact);
}
