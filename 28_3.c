#include<stdio.h>
#include<string.h>

void strToggleX(char *str )
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 97 && str[i] <=122 )
        {
            str[i] = str[i] - 32;
        }
        else if(str[i] >= 65 && str[i] <= 90 )
        {
            str[i] = str[i] + 32;
        }
        
        i++;
    }
    printf("%s" , str);  

}

int main()
{
    char str[20];

    printf("Enter the string :");
    scanf("%[^'\n']s " , str);
    
    strToggleX(str);
     
return 0;
}