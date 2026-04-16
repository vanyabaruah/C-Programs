# include<stdio.h>
void arm(int);
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    arm(a);
    return 0;
}
void arm(int x)
{
    int c=0,i,k=x;
    while (x>0)
    {
        i=x%10;
        c=c+(i*i*i);
        x=x/10;    
    }
    if (c==k)
    {
        printf("armstrong");
    }
    else
    {
        printf("not armstrong");
    }
}