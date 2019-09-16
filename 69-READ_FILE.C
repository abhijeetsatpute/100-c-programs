/*C progam - Read txt file using fgetc and FILE pointer

Author: abhijeet
  Created on 16 Sept, 2019, 09:10 PM
*/
#include "stdio.h"
#include "stdlib.h"
int main ()
{
  char ch;
  FILE *fp;
  fp=fopen("f1.txt","r");
  if(fp==NULL){
    printf("File not found");
    exit(1);
    }
  ch=fgetc(fp);
  while(!feof(fp)){
    printf("%c",ch );
    ch=fgetc(fp);
  }
  fclose(fp);
  return 0;
}
