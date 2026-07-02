# include<stdio.h>
int main()
{
 char c;
 printf("enter a character");
 scanf("%c",&c);
 switch (c)
 {
    case 'A':
    case 'a':
    case 'e':
    case 'E':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        printf("Vowel");
        break;
    default:
        printf("consonent");
 }   
}