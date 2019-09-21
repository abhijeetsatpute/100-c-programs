/*C progam - fscanf() to read the content to file
Parameters:

Author: abhijeet
  Created on 22 Sept, 2019, 03:36 AM
*/
#include "stdio.h"
#include "stdlib.h"

int main ()
{
  FILE *fp;
  int a,b,c;
  fp=fopen("f1.txt","r");
  fscanf(fp,"%d,%d,%d",&a,&b,&c);
  printf("A=%d B=%d C=%d",a,b,c);
  fclose(fp);
  return 0;
}
