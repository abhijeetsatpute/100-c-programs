/*C progam -Array input and print using pointers

Author: abhijeet
  Created on 13 Sept, 2019, 06:04 PM
*/
#include<windows.h>
void input(int *p)
{
    int i;
    for(i=0;i<=4;i++)
      scanf("%d",p+i);
}

void display(int *p)
{
  int i;
  for(i=0;i<=4;i++)
    printf(" %d",*(p+i));
}

main()
{
  int a[5];
  input(a);
  display(a);
  getch();
}
