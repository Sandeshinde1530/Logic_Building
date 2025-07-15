#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0, iSumNonFact = 0;
    int iDiff = 0;


    for(iCnt = 1 ;iCnt <iNo ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact += iCnt;  
            printf("%d\t",iCnt);         
        }
        else
        {
            iSumNonFact += iCnt;
        }
    } 

    printf("\n%d \t %d\n",iSumFact , iSumNonFact);
    iDiff = iSumNonFact - iSumFact;

    return iDiff;   
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}