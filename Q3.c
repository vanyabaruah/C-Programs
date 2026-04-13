# include<stdio.h>
int main()
{
    int b,hra,a,t;
    printf("enter the basic");
    scanf("%d",&b);
    printf("enter the allowance");
    scanf("%d",&a);
    hra=(b*40)/100;
    t=b+hra+a;
    printf("total salary: %d",t);
}