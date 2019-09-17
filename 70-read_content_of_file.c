/*C progam - Read the content txt file using fgets function

Author: abhijeet
  Created on 17 Sept, 2019, 08:57 AM
*/
#include "stdio.h"
#include "stdlib.h"
int main ()
{
  char str[10];
  FILE *fp;
  fp=fopen("f1.txt","r");
  if(fp==NULL){
    printf("File not found");
    exit(1);
    }
  while(fgets(str,"9",fp)!=NULL){
    printf("%s",str );
  }
  fclose(fp);
  return 0;
}
