# include <stdio.h>
void add (int,int);
int main()
{
    int a,b;
    printf("enter the number");
    scanf("%d", &a);
    printf("enter the second number");
    scanf("%d", &b);
    add (a,b);
    return 0;
}
void add (int x, int y)
{
    int z;
    z=x+y;
    printf("%d",z);
}