#include<stdio.h>

void Display(int iNo)
{
   if(iNo < 10)
   {
    printf("Hello");
   }
   else
   {
    printf("Demo");
   }
}


int main()
{
    int iValue = 0;

    printf("Enter thenumber :");
    scanf("%d",&iValue);

    Display(iValue);
    return 0 ;
}
