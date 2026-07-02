# include<stdio.h>
int main()
{
    char c;
    int a,b,d=0;
    printf("enter the character +,-,*,/");
    scanf("%c",&c);
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&b);
    switch (c)
    {
        case '+': 
            d=a+b; 
            break;
        case '-': 
            d=a-b; 
            break;
        case '*': 
            d=a*b; 
            break;
        case '/': 
            d=a/b; 
            break;
        default:
            printf("Wrong choice");
    }
    printf("%d",d);
    return 0;
}