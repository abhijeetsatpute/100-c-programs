/*C progam to find greater in three numbers using conditional operator

Author: abhijeet
  Created on 12 Sept, 2019, 12:39 AM
*/
#include<windows.h>
 main()
{
    int a,b,c;
    scanf("%d,%d,%d",&a,&b,&c);
    printf("%d",a>b? a>c?a:c : b>c?b:c);
    getch();
}
