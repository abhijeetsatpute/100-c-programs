/*C progam -Array of char or String

Author: abhijeet
  Created on 12 Sept, 2019, 08:31 PM
*/
#include<stdio.h>
int main()
{
    int i;
    char x[20];
    /*
    for(i=0;x[i]!='\0';i++)
        printf("%c",x[i]);     //chars till null
    */
    scanf("\%s",x);       //whole string
    printf("%s",x );
    puts(x);                   //withour format specifier cursor to next line
    getch();
    return 0;
  }
