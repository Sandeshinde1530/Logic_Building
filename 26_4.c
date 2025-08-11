#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial( char ch)
{
    
    if(ch >= 33 && ch <= 46)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character: ");
    scanf("%c",&cValue);

    bRet = ChkSpecial( cValue);

    if(bRet ==true)
    {
        printf("it is special");
    }
    else
    {
        printf("It is not the special");
    }
    return 0;
}