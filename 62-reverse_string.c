/*C progam - find reverse of the string

Author: abhijeet
  Created on 13 Sept, 2019, 08:58 PM
*/
#include<windows.h>

char* rev(char *p)
{
  int i,l;
  char t;
  for(l=0;*(p+l)!='\0';l++);
  for(i=0;i<l/2;i++)
  {
    t=*(p+i);
    *(p+i)=*(p+l-1-i);
    *(p+l-1-i)=t;
  }
  return(p);
}

int main()
{
  int a[5];
  gets(a);
  printf("%s",rev(a));
  return 0;
}
