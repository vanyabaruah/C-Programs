# include<stdio.h>
void fact(int);
int main()
{
    int a;
    printf("enter a number");
    scanf("%d", &a);
    fact(a);
    return 0;
}
void fact(int x)
{
    int i,m=1;
    for (i=1;i<=x;i++)
    {
        m=m*i;
    }
    printf("%d",m);
}