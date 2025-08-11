#include<stdio.h>
#include<string.h>

void reverse(char *str )
{
    int i = 0;
    int j = 0;
    char Arr[20] ;
    
    for(i = strlen(str) - 1 ;  i >= 0 ; i--, j++)
    {
        Arr[j] = str[i];
    }

    Arr[j] = '\0';
    printf("%s" , Arr);  

}

int main()
{
    char str[20];

    printf("Enter the string :");
    scanf("%[^'\n']s " , str);
    
    reverse(str);
     
return 0;
}