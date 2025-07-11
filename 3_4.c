#include<stdio.h>

void DisplayConvert(char cAlpha)
{
    if(cAlpha >= 65 && cAlpha <=90)
    {
        printf("%c",cAlpha + 32);
    } 
    else if(cAlpha >= 90 && cAlpha <=122)
    {
        printf("%c",cAlpha - 32);
    }
    
        
}

int main()
{
    char cValue = '\0';

    printf("Enter the Alphabet :");
    scanf("%c",&cValue);

    DisplayConvert(cValue);



    return 0;
}
