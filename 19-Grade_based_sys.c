/*C progam to grade the students based on their marks
  Author: abhijeet
  Created on 10 Sept, 2019, 05:49 AM
*/
#include <stdio.h>
int main()
{
  int roll,s1,s2,s3,total;
  float avg;
  printf("Enter the Roll number of the student: ");
  scanf("%d",&roll );
  printf("Enter the subject 1 marks: ");
  scanf("%d",&s1 );
  printf("Enter the subject 2 marks: ");
  scanf("%d",&s2 );
  printf("Enter the subject 3 marks: ");
  scanf("%d",&s3 );
  total=s1+s2+s3;
  avg=total/3;
  if(avg>=60)
    {
      printf(" %d had Secured grade A with Average of : %.2f and Total score of : %d",roll,avg,total);
    }
  else if((avg>=50)&&(avg<60))
    {
      printf(" %d had Secured grade B with Average of : %.2f and Total score of : %d",roll,avg,total);
    }
  else if((avg>=40)&&(avg<50))
    {
      printf(" %d had Secured grade C with Average of : %.2f and Total score of : %d",roll,avg,total);
    }
  else
    {
      printf("%d Failed",roll );
    }
  return 0;
}
