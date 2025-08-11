#include<stdio.h>

void Display( char ch)
{
    
    if(ch >= 65 && ch <= 90)
    {
        for(int i = ch ; i <=90 ; i++)
        {
            printf("%c\t",i);
        }
    }
    else if(ch >= 97 && ch<= 122)
    {
        for(int i = ch ; i <=122 ; i++)
        {
            printf("%c\t",i);
        }
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