#include<stdio.h>
int main()
{
    int c,f;
    printf("enter the temperature in fahreneit");
    scanf("%d",&f);
    c=(f-32)*5/9;
    printf("temperature in celcius %d",c);
}