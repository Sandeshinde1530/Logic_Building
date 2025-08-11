#include<stdio.h>

int CountSmall(char *str )
{
    int i = 0;
    int iCnt = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 97 && str[i] <= 122)
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
    
    int iRet = CountSmall(str);

    printf("%d",iRet);

     
return 0;
}