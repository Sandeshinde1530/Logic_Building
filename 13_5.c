#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[] , int iLength)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt<iLength ; iCnt++)
    {
        if(Arr[iCnt] % 11 == 0)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0;
    int *p = NULL;

    printf("How many elements:");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("enter %d elements:",iSize);

    for (int iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    Display(p , iSize);
    return 0 ;
}