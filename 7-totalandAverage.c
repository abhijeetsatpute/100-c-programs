/*C progam to find Total marks and Average marks
  Author: abhijeet
  Created on 9 Sept, 2019, 04:54 PM
*/
#include <stdio.h>
#include <stdlib.h>
main()
{
  int roll,s1,s2,s3,total;
  float avg;
  printf("Enter the Roll number of the student: ");
  scanf("%d",&roll );
  printf("Enter the subject 1 marks: ");
  scanf("%d",&s1 );
  printf("Enter the subject 1 marks: ");
  scanf("%d",&s2 );
  printf("Enter the subject 1 marks: ");
  scanf("%d",&s3 );
  total=s1+s2+s3;
  avg=total/3;
  printf("Total Marks : %d \nAverage Marks : %f",total,avg );
  getch();
}
