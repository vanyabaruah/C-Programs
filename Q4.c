# include<stdio.h>
int main()
{
    int p,t,r,si;
    printf("enter the principal amount");
    scanf("%d",&p);
    printf("enter the time period");
    scanf("%d",&t);
    printf("enter the rate of interest");
    scanf("%d",&r);
    si=(p*r*t)/100;
    printf("simple interest: %d",si);
}