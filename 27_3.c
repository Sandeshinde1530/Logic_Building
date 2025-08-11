#include<stdio.h>

int Diff(char *str )
{
    int i = 0;
    int iCntsml = 0 , iCntCap = 0;
    int iDiff= 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 97 && str[i] <= 122)
        {
            iCntsml++;
        }
        else if(str[i] >= 60 && str[i] <= 90)
        {
            iCntCap++;
        }
        i++;
    }
    iDiff = iCntsml - iCntCap;

    return iDiff;
}

int main()
{
    char str[20];

    printf("Enter the string :");
    scanf("%[^'\n']s " , str);
    
    int iRet = Diff(str);

    printf("%d",iRet);

     
return 0;
}