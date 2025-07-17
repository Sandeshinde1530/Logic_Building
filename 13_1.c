#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
    int iSumEvn = 0 , iSumOdd = 0 , iDiff = 0;

    for(int iCnt = 0 ; iCnt <iLength ; iCnt++)
    {
        if(Arr[iCnt]  % 2 == 0)
        {
            iSumEvn += Arr[iCnt];
        }
        else
        {
            iSumOdd += Arr[iCnt];
        }
    }

    iDiff = iSumEvn - iSumOdd;

    return iDiff;
}

int main()
{
    int iSize = 0 ,iRet = 0,iCnt = 0 ;
    int *p = NULL;

    printf("How many numbers :");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory ");
        return -1;
    }
    printf("Enter %d elements :\n", iSize);
    for(int i = 0; i<iSize ; i++)
    {
        printf("Enter %d element : ",i + 1);
        scanf("%d",&p[i]);
    }

    iRet = Difference(p , iSize);    

    printf("Difference is : %d",iRet);

    return 0;
}