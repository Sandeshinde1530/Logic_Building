#include<stdio.h>

int CountCap(char *str )
{
    int i = 0;
    int iCnt = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 65 && str[i] <= 90)
        {
            iCnt++;
        }
        i++;
    }

    return iCnt++;
}

int main()
{
    char str[20];

    printf("Enter the string :");
    scanf("%[^'\n']s " , str);
    
    int iRet = CountCap(str);

    printf("%d",iRet);

     
return 0;
}