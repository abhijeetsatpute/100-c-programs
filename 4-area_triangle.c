/*C progam to print arae of triangle
  Author: abhijeet
  Created on 9 Sept, 2019, 04:36 PM
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float area,h,b;
		printf("Enter the Height and Base\n");
    scanf("%f%f",&h,&b);
    area=0.5*b*h;
    printf("%6.2f",area);
    return 0;
}
