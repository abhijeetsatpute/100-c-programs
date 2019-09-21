#define max 2048
main()
{
    int n,i,marks[max],total=0;
    char gend;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&marks[i]);
    }
    scanf("%c",&gend);
    if(gend == 'b')
    {
        total=marks[0]+marks[2];
    }
    else if(gend == 'g')
    {
        total=marks[1]+marks[3];
    }
    printf("%d",total);
}
