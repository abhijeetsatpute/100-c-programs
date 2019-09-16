/*C progam - Dynamic memory allocation using malloc calloc

Author: abhijeet
  Created on 14 Sept, 2019, 09:32 AM
*/
#include "stdio.h"
int main()
{
  int i;
  FILE *fp;
  char s[]="Hello students";
  fp=fopen("f1.txt","w");
  if(fp==NULL){
    printf("File not found");
    exit(1);
  }
  for(i=0;i<strlen(s);i++)
    fputc(s[i],fp);
  fclose(fp);
  getch();
}
