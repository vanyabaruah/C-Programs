# include<stdio.h>
int main()
{
    char c;
    printf("enter a value");
    scanf("%c",&c);
    if (c=='a' || c== 'A')
        {
            printf("vowel");
        }
    else if (c=='e' || c=='E')
    {
        printf("vowel");
    }
    else if (c=='i' || c=='I')
    {
        printf("vowel");
    }
    else if (c=='o' || c=='O')
    {
        printf("vowel");
    }
    else if (c=='u' || c=='U')
    {
        printf("vowel");
    }
    else
    {
        printf("consonant");
    }
    return 0;
}