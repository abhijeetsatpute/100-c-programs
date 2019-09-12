/*C progam -functions take something return nothing

Author: abhijeet
  Created on 12 Sept, 2019, 10:34 AM
*/
#include<windows.h>
int add(void);
void main()
{
    int s;
    s=add();
    printf("%d",s);
    getch();
  }

int add()
{
  int a ,b,c;
  printf("Enter two nubers");
  scanf("%d%d",&a,&b );
  return (a+b);
}
