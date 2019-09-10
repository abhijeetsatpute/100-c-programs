/*C progam to print first n even&odd numbers
  Author: abhijeet
  Created on 10 Sept, 2019, 06:54 AM
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a,i=2;
  char choice;
  printf("Enter Your choice: 1.Even\t2.Odd\n\t");
  scanf("%c",&choice);
  printf("Enter your number : ");
  scanf("%d",&a);
  if (choice=='1')
    {
      while (i<=a)
        {
          printf("%d\n",i );
          i+=2;
        }
    }
  else if(choice=='2')
    {
      i=1;
      while (i<=a)
        {
          printf("%d\n",i );
          i+=2;
        }
    }
  else
    {
      printf("Invalid choice");
    }
  return 0;
}
