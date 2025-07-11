#include<stdio.h>

void ChkVowel(char cAlpha)
{
    if(cAlpha == 'a' ||cAlpha == 'e'||cAlpha == 'i'||cAlpha == 'o'||cAlpha == 'u'||cAlpha == 'A'||cAlpha == 'E'||cAlpha == 'I'||cAlpha == 'O'||cAlpha == 'U')
    {
        printf("It is a vowel");
    }
    else
    {
        printf("It is not a vowel");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    ChkVowel(cValue);
}