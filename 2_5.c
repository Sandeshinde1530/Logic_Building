#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int iNo )
{
    if(iNo % 2 ==0)
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
    int iValue1 = 0;
    bool bRet = false;

    printf("Enter  number :");
    scanf("%d",&iValue1);

    bRet = ChkEven(iValue1);

    if(bRet == true)
    {
        printf("It is EVEN");
    }
    else
    {
        printf("It is ODD");
    }

    return 0 ;
}
