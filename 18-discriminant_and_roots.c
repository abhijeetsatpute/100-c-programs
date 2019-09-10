/*C progam to Check the Discriminant D = b^2 - 4ac
                        Roots        R1 = (-b +/- x)/2a
  Author: abhijeet
  Created on 10 Sept, 2019, 05:39 AM
*/
#include <stdio.h>
int main()
{
  int a,b,c,d,r1,r2,x;
  printf("Enter The Value of x, a, b and c\n: ");
  scanf("%d%d%d%d",&x,&a,&b,&c);
  d=(b*b)-4*a*c;
  printf("\nD : %d\n",d );
  r1=(-b+x)/2*a;
  r2=(-b-x)/2*a;
  if(d>0)
    {
      printf("two distinct real roots : %d %d",r1,r2);
    }
  else if(d<0)
    {
      printf("imaginary roots : %d %d",r1,r2);
    }
  else
    {
      printf("Two Equal Roots : %d %d",r1,r2);
    }
  return 0;
}
