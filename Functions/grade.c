# include<stdio.h>
void grade(int,int,int,int,int);
int main()
{
    int a,b,c,d,e;
    printf("enter maths marks");
    scanf("%d",&a);
    printf("enter english marks");
    scanf("%d",&b);
    printf("enter physics marks");
    scanf("%d",&c);
    printf("enter chemistry marks");
    scanf("%d",&d);
    printf("enter computer marks");
    scanf("%d",&e);
    grade(a,b,c,d,e);
}
void grade(int x,int y,int z,int w,int v)
{
    int t,p;
    t=x+y+z+w+v;
    p=t/5;
    if (p>=80)
    {
        printf("grade A");
    }
    else if (p>=60 && p<80)
    {
        printf("grade B");
    }
    else if (p>=40 && p<60)
    {
        printf("grade C");
    }
    else if(p>=20 && p<40)
    {
        printf("grade D");
    }
}