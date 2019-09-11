/*C progam for gotoxy function to move cursor on screen to position

Author: abhijeet
  Created on 11 Sept, 2019, 03:20 PM
*/
#include<windows.h>

void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

 main()
{
    gotoxy(40,13);
    printf("Hello");
    getch();
}
