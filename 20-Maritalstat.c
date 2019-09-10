/*C progam to check eligibility of candidates to marry
  Author: abhijeet
  Created on 10 Sept, 2019, 06:06 AM
*/
#include <stdio.h>
int main()
{
  int age;
  char stat,sex;
  printf("Enter marital status, Gender and Age in (M,F,18) format :");
  scanf("%c,%c,%d",&stat,&sex,&age);
  if(stat=='m')
    {
      printf("You Cannot Marry");
    }
  else if(stat=='u')
    {
      if(sex=='m')
        {
          if(age>=21)
            {
              printf("You can Marry");
            }
          else
            {
              printf("You Cannot Marry");
            }
        }
      else if(sex=='f')
        {
          if(age>=18)
            {
              printf("You can Marry");
            }
          else
            {
              printf("You Cannot Marry");
            }
        }

      else
        printf("Invalid Gender");
    }
  else
    {
      printf("Invalid Marital status");
    }
  return 0;
}
