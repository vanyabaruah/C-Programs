# include<stdio.h>
void fun(int[5]);
int main()
{
    int arr[5],i;
    printf("enter some values");
    for (i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    fun(arr);
    return 0;
}
void fun (int a[5])
{
    int i;
    for (i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
}