# include<stdio.h>
void count(int [5]);
int main()
{
    int i, d[5];
    printf("enter a number");
    for (i=0;i<5;i++)
    {
        scanf("%d",&d[i]);
    }
    for (i=0;i<5;i++)
    {
        printf("%d",d[i]);
    }
    count(d);
}
void count (int x[5])
{
    int i,a=0,b=0;
    for (i=0;i<5;i++)
    {
        if (x[i]>0)
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    printf("\nno. of positive: %d:",a);
    printf("\nno. of negative: %d",b);
}