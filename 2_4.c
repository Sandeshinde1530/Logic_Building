#include<stdio.h>

void Display(int iNo , int iFreq)
{
   int iCnt = 0;

   for(iCnt = 1;iCnt <=iFreq ;iCnt++)
   {
    printf("%d\t",iNo);
   }
}


int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter two number :");
    scanf("%d %d",&iValue1,&iValue2);

    Display(iValue1 , iValue2);
    return 0 ;
}
