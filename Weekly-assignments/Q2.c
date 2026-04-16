# include<stdio.h>
int main()
{
    int a,b;
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d", &b);
    printf("your values are %d and %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nswapped values are %d and %d",a,b);
    return 0;
}