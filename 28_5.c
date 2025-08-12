#include<stdio.h>
#include<string.h>

void COuntWhite(char *str )
{
    int i = 0;
    int iCnt = 0;
    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            iCnt++;
        }        
        i++;
    }
    printf("%d" , iCnt);   

}

int main()
{
    char str[20];

    printf("Enter the string :");
    scanf("%[^\n]s " , str);
    
    COuntWhite(str);
     
return 0;
}