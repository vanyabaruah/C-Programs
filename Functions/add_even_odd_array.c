# include <stdio.h>
void sum(int [5]);
int main()
{
    int i, d[5];
    printf("enter the number");
    for (i=0;i<5;i++)
    {
        scanf("%d",&d[i]);
    }
    for (i = 0; i <5; i++)
    {
        printf("%d",d[i]);
    }
    sum(d);
}
void sum(int x[5])
{
    int i,a=0,b=0;
    for (i=0;i<5;i++)
    {
        if (x[i]%2==0)
        {
            a=a+x[i];
        }
        else 
        {
            b=b+x[i];
        }
    }
    printf("sum of even %d: ",a);
    printf("sum of odd %d: ",b);
}