# include<stdio.h>
int main()
{
    char c;
    printf("enter the alphabet");
    scanf("%c",&c);
    switch(c)
    {
        case 'v':
            printf("\nViolet");
            break;
        case 'i':
            printf("\nIndigo");
            break;
        case 'b':
            printf("\nBlue");
            break;
        case 'g':
            printf("\nGreen");
            break;
        case 'y':
            printf("\nYellow");
            break;
        case 'o':
            printf("\nOrange");
            break;
        case 'r':
            printf("\nRed");
            break;
        default:
            printf("\nnot a colour in rainbow");
            break;
    }
    return 0;
}