/*C progam - write to txt file using fputs function

Description
The C library function int fputs(const char *str, FILE *stream) writes a string to the specified stream up to but not including the null character.

Declaration
Following is the declaration for fputs() function.

int fputs(const char *str, FILE *stream)

Parameters
str − This is an array containing the null-terminated sequence of characters to be written.
stream − This is the pointer to a FILE object that identifies the stream where the string is to be written.

Return Value
This function returns a non-negative value, or else on error it returns EOF.

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
