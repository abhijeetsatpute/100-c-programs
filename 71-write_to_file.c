/*C progam - write to txt file using fputs function

Author: abhijeet
  Created on 17 Sept, 2019, 08:57 AM
*/
#include "stdio.h"
#include "stdlib.h"
int main ()
{
  char str[20];
  FILE *fp;
  fp=fopen("f1.txt","a");           //write mode overwrites the content
  printf("Enter your text");
  gets(str);
  fputs(str,fp);
  fclose(fp);
  return 0;
}
