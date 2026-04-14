# include <stdio.h>
void add (int,int);
void sub (int,int);
void mult (int,int);
void dive (int,int);
int main()
{
    int a,b;
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d,",&b);
    add (a,b);
    sub(a,b);
    mult(a,b);
    dive(a,b);
    return 0;
}
void add(int x, int y)
{
    int c;
    c=x+y;
    printf("\naddition: %d", c);
}
void sub(int x, int y)
{
    int c;
    c=x-y;
    printf("\nsubtraction: %d",c);
}
void mult(int x, int y)
{
    int c;
    c=x*y;
    printf("\nmultiplication: %d",c);
}
void dive(int x, int y)
{
    int c;
    c=x/y;
    printf("\ndivision %d",c);
}