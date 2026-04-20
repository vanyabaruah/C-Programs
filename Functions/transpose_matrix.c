# include<stdio.h>
void trans(int a[3][3]);
int main()
{
    int b[3][3],i,j;
    printf("enter the value");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    trans(b);
}
void trans(int x[3][3])
{
    int y[3][3],i,j;
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            y[i][j]=x[j][i];
        }
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",y[i][j]);
        }
        printf("\n");
    }
}