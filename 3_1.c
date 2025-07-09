#include<stdio.h>

void PrtEvn(int iNo)
{
    int iCnt = 0 , i = 1;

    if(iNo <= 0)
    {
        return;
    }
    else
    {
        iCnt = 1;
        while(iCnt <= iNo)
        {
            if(i % 2 ==0)
            {
                printf("%d\t",i);
                iCnt++;
            }
            i++;
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    PrtEvn(iValue);



    return 0;
}
