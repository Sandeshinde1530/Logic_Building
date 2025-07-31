#include<stdio.h>

void Display( char ch)
{
    printf(" values is '%c'", ch);
    if(ch >= 65 && ch <= 90)
    {
        printf("'%c'", ch+32);
    }
    else if(ch >= 97 && ch<= 122)
    {
        printf("%c", ch-32);
    }
    else
    {
        printf("%c", ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c",&cValue);

    Display( cValue);
    return 0;
}