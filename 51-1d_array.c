/*C progam -Array

Author: abhijeet
  Created on 12 Sept, 2019, 02:31 PM
*/
#include<stdio.h>
int main()
{
    int n;
    printf("How many values ?");
    scanf("%d",&n);
    int x[n],i;
    printf("Enter %d numbers",n);
    for(i=0;i<n;i++)
      scanf("%d",&x[i]);
    for(i=0;i<n;i++)
      printf("%d ",x[i]);
    return 0;
  }
