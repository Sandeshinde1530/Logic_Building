#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
    if(iNo % 5 == 0)
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number:");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("It is divisible by 5");
    }
    else
    {
        printf(" it is not");
    }
    
    return  0;
}