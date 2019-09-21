/*C progam - fprintf() to printthe content to file
Parameters:

Author: abhijeet
  Created on 17 Sept, 2019, 04:10 PM
*/
#include "stdio.h"
#include "stdlib.h"

struct book
{
  int id;
  char title[20];
  float price;
};

int main ()
{
  struct book b1;
  FILE *fp;
  fp=fopen("book.txt","rb");
  if(fp==NULL){
    printf("Fie not found");
    exit(1);
  }
  while(fread(&b1,sizeof(b1),1,fp)>0)
  {
    printf("%d %s %f \n",b1.id,b1.title,b1.price );
  }
  fclose(fp);
  return 0;
}
