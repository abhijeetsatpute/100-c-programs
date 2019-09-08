#include <stdio.h>
#include <stdlib.h>

main()
{
	float b,h,area;
	printf("Enter the base and height of the triangle :");
	scanf("%f %f",&b,&h);
	area=(1/2)*b*h;
	printf("%f",area);
	getch();
}
