/*C progam - find length of the string

Author: abhijeet
  Created on 13 Sept, 2019, 08:45 PM
*/
#include<windows.h>

int len(char *c)
{
  int i;
  for(i=0;*(c+i)!='\0';i++);
  return(i);
}

int main()
{
  int a[5];
  gets(a);
  printf("%d\n",len(a));
  return 0;
}
