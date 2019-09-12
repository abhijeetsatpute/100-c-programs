/*C progam -functions

Author: abhijeet
  Created on 12 Sept, 2019, 08:48 AM
*/
#include<windows.h>
 main()
{
    int choice;
    while(1)
    {
    scanf("%d",&choice);
    switch (choice)
    {
      case 1: call();
            break;
      case 2: bye();
            break;
      case 3: exit(0);
      default : printf("Enter 1 or 2 only - 3 to exit");
    }
    getch();
  }
}

call()
{
  printf("Hello world");
}

bye()
{
  printf("Bye");
}
