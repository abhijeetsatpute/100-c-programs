/*C progam - write to the text file using fwrite function
Description
The C library function size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream) writes data from the array pointed to, by ptr to the given stream.

Declaration
Following is the declaration for fwrite() function.

size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream)

Parameters
ptr − This is the pointer to the array of elements to be written.
size − This is the size in bytes of each element to be written.
nmemb − This is the number of elements, each one with a size of size bytes.
stream − This is the pointer to a FILE object that specifies an output stream.

Return Value
This function returns the total number of elements successfully returned as a size_t object, which is an integral data type. If this number differs from the nmemb parameter, it will show an error.

Author: abhijeet
  Created on 17 Sept, 2019, 09:12 AM
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
