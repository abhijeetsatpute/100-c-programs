/*C progam to print the numbers in asceding and decending order
  Author: abhijeet
  Created on 10 Sept, 2019, 05:03 AM
*/
#include <stdio.h>
 main()
{
  int a,b,c;
  printf("Enter The numbers to be sorted\nA\tB\tC :\n");
  scanf("%d%d%d",&a,&b,&c);
  if((a>=b)&&(a>=c))
    {
      if(b>=c)
        {
          printf("Ascending order is :\t%d\t%d\t%d",c,b,a);
          printf("\nDecending order is :\t%d\t%d\t%d",a,b,c);
        }
      else
        {
          printf("Ascending order is :\td%d\t%d\t%d",b,c,a);
          printf("\nDecending order is :\t%d\t%d\t%d",a,c,b);
        }
    }
  else if((b>=a)&&(b>=c))
  {
    if(a>=c)
      {
        printf("Ascending order is :\t%d\t%d\t%d",c,a,b);
        printf("\nDecending order is :\t%d\t%d\t%d",b,a,c);
      }
    else
      {
        printf("Ascending order is :\t%d\t%d\t%d",a,c,b);
        printf("\nDecending order is :\t%d\t%d\t%d",b,c,a);
      }
  }
  else
  {
    if(a>=b)
      {
        printf("Ascending order is :\t%d\t%d\t%d",b,a,c);
        printf("\nDecending order is :\t%d\t%d\t%d",c,a,b);
      }
    else
      {
        printf("Ascending order is :\t%d\t%d\t%d",a,b,c);
        printf("\nDecending order is :\t%d\t%d\t%d",c,b,a);
      }
  }
  getch();
}
