/*C progam -Array of char or String

Author: abhijeet
  Created on 12 Sept, 2019, 08:31 PM
*/
#include<stdio.h>
int main()
{
    int i;
    //printf("Enter number of names to be stored\n");
    //scanf("%d",&n);
    char x[3][20];
    for (i=0;i<=2;++i)
      gets(x[i]);
    for (i=0;i<=2;i++)
      printf("%s\n",x[i]);
    return 0;
}
