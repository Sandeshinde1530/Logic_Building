#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int iSumEvn = 0 , iSumOdd = 0 , iDiff = 0;

    for(int iCnt = 0 ; iCnt <iLength ; iCnt++)
    {
        if(Arr[iCnt]  % 5 == 0   && Arr[iCnt]  % 3 == 0 )
        {
            printf("%d\t",Arr[iCnt]);
        }        
    }

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

  Display(p , iSize);    

    return 0;
}