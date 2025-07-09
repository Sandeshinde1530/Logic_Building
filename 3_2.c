#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0 , i = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1 ; i<=iNo/2 ; i++)
    {
        if((iNo % i == 0)&& i % 2 == 0)
        {
            printf("%d ",i);
        }
    }
        
}

int main()
{
    int iValue = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    DisplayFactor(iValue);



    return 0;
}
