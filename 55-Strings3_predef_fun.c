:/*C progam -Array of char or String

Author: abhijeet
  Created on 12 Sept, 2019, 08:31 PM
*/
#include<stdio.h>
int main()
{
    int i;
    char y[20];
    gets(y);
    puts(y);
    printf("%d\n",strlen(y));      //Calc the leng of the string
    printf("%s\n",strrev(y));     //reverse String
    strrev(y);
    printf("%s\n",strlwr(y));     //lowercase
    printf("%s\n",strupr(y));     //uppercase
    /*
    printf(" %d ",strcpy(y));     // strcpy(s,"COPYTHISSTRINGTOs")
    printf(" %d ",strcmp(y));     // strcmp("AMAR","AMIT")
    printf(" %d ",strcat(y));     // strcat(s,"addthistoendofS")
    */
    getch();
    return 0;
}
