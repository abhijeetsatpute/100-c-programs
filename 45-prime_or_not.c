/*C progam to check number is prime or not

Author: abhijeet
  Created on 11 Sept, 2019, 12:04 PM
*/
#include <stdio.h>
main()
{

  int i,n;
  printf("Enter the number to be checked : ");
  scanf("%d",&n);
  if (n==1)
    {
      printf("%d Not prime",n);
      exit(0);
    }
  else
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
          printf("%d Not prime",n);
          exit(0);
        }
    }
    printf("%d is Prime",n);
  }
