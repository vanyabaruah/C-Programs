# include<stdio.h>
int main()
{
    int a,b,c,d,e,t,p;
    printf("enter the marks in maths");
    scanf("%d",&a);
    printf("enter the marks in english");
    scanf("%d",&b);
    printf("enter the marks in chemistry");
    scanf("%d",&c);
    printf("enter the marks in physics");
    scanf("%d",&d);
    printf("enter the marks in computer");
    scanf("%d",&e);
    t=a+b+c+d+e;
    p=t/5;
    if (p>=80)
    {
        printf("Distinction");
    }
    else if(p>=60 && p<80)
    {
        printf("First");
    }
    else if(p>=45 && p<60)
    {
        printf("Second");
    }
    else 
    {
        printf("Third");
    }
    return 0;
}
