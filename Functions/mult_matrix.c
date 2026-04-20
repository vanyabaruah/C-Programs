#include<stdio.h>
void mult(int c[3][3], int b[3][3]);
int main()
{
    int i,j, a[3][3],d[3][3];
    printf("enter the number for matrix 1: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the numbers for matrix 2: ");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&d[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",d[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    mult(a,d);
}
void mult(int x[3][3], int y[3][3])
{
    int i,j,z[3][3],k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            z[i][j]=0;
            printf("%d",z[i][j]);            
            for(k=0;k<3;k++)
            {
               z[i][j]= z[i][j] + (x[i][k]*y[k][j]);            
            }
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",z[i][j]);
        }
        printf("\n");
    }
}