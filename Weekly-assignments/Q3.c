# include<stdio.h>
int main()
{
    int a,b;
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&b);
    printf("your co-ordinates are %d,%d",a,b);
    if (a>0 && b>0)
    {
        printf("\nfirst quadrant");
    }
    if (a<0 && b>0)
    {
        printf("\nsecond quadrant");
    }
    if (a<0 && b<0)
    {
        printf("\nthird quadrant");
    }
    if (a>0 && b<0)
    {
        printf("\nfourth quadrant");
    }
    return 0;
}