/*C progam - read from text file using fread function
Description
The C library function size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream) reads data from the given stream into the array pointed to, by ptr.

Declaration
Following is the declaration for fread() function.

size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream)

Parameters
ptr − This is the pointer to a block of memory with a minimum size of size*nmemb bytes.
size − This is the size in bytes of each element to be read.
nmemb − This is the number of elements, each one with a size of size bytes.
stream − This is the pointer to a FILE object that specifies an input stream.

Return Value
The total number of elements successfully read are returned as a size_t object, which is an integral data type. If this number differs from the nmemb parameter, then either an error had occurred or the End Of File was reached.

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
