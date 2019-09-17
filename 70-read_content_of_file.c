/*C progam - Read the content txt file using fgets function
Description
The C library function char *fgets(char *str, int n, FILE *stream) reads a line from the specified stream and stores it into the string pointed to by str. It stops when either (n-1) characters are read, the newline character is read, or the end-of-file is reached, whichever comes first.

Declaration
Following is the declaration for fgets() function.

char *fgets(char *str, int n, FILE *stream)

Parameters
str − This is the pointer to an array of chars where the string read is stored.
n − This is the maximum number of characters to be read (including the final null-character). Usually, the length of the array passed as str is used.
stream − This is the pointer to a FILE object that identifies the stream where characters are read from.

Return Value
On success, the function returns the same str parameter. If the End-of-File is encountered and no characters have been read, the contents of str remain unchanged and a null pointer is returned.
If an error occurs, a null pointer is returned.

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
