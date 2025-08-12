#include<stdio.h>
#include<string.h>

void strToggleX(char *str )
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 48 && str[i] <=57 )
        {
            printf("%c", str[i]);
        }
        
        i++;
    }
    

}

int main()
{
    char str[20];

    printf("Enter the string :");
    scanf("%[^'\n']s " , str);
    
    strToggleX(str);
     
return 0;
}