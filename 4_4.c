#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;


    for(iCnt = 1 ;iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum += iCnt;           
        }
    } 

    return iSum;   
}

int main()
{

    int iValue = 0 , iRet = 0;


    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
}