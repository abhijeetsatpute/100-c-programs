/*C progam -2D Array of size "nxm"

Author: abhijeet
  Created on 12 Sept, 2019, 02:40 PM
*/
#include<stdio.h>
int main()
{
    int n,m;
    printf("Dimension ? (nxm) : ");
    scanf("%dx%d",&n,&m);
    int x[n][m],i,j;
    printf("Enter %d numbers",n*m);
    for(i=0;i<n;i++)
      for(j=0;j<m;j++)
        scanf("%d",&x[i][j]);
    for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
        printf("%d ",x[i][j]);
      printf("\n");
    }
    return 0;
  }
