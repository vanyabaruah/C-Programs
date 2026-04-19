# include<stdio.h>
void maxmin(int [5]);
int main()
{
    int d[5],i;
    printf("enter the values");
    for (i=0;i<5;i++)
    {
        scanf("%d",&d[i]);
    }
    for (i=0;i<5;i++)
    {
        printf("%d",d[i]);
    }
    maxmin(d);
}
void maxmin(int a[5])
{
    int i,v=a[0],ma,mi=a[0];
    for (i=0;i<5;i++)
    {
        if (a[i]>v)
        {
            ma=a[i];
        }
    }
    printf("\n Max value%d",ma);
    for(i=0;i<5;i++)
    {
        if (a[i]<mi)
        {
            mi=a[i];
        }
    }
    printf("\n Min value%d",mi);
}