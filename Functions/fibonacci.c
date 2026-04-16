# include <stdio.h>
void fib(int);
int main()
{
    int n;
    printf("enter the range");
    scanf("%d", &n);
    fib (n);
    return 0;
}
void fib(int x)
{
    int a=0,b=1,c=0;
    printf("\t %d%d", a,b);
    while(c<x)
    {
        c=a+b;
        a=b;
        b=c;
        printf("\t %d",c);
    }   
}