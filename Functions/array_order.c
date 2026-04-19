# include<stdio.h>
void order(int [5]);
int main()
{
    int arr[5],i;
    printf("enter the value");
    for (i=0;i<5;i++)
    {
        scanf("%d", &arr[i]);
    }
    order(arr);
}
void order(int a[5])
{       
    int i,j,temp;
    for (i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
    printf("\norder array");
    for (i=0;i<5;i++)
    {
        for (j=i+1;j<5;j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for (i=0;i<5;i++)
    {
        printf("%d", a[i]);
    }
}

