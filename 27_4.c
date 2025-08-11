#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str )
{
    int i = 0;
    bool bFlag = false;
   
    while(str[i] != '\0')
    {
        if(str[i] == 'a' ||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'||str[i] == 'A'||str[i] == 'E'||str[i] == 'I'||str[i] == 'O'||str[i] == 'U')
        {
            bFlag = true;
            break;
        }
        i++;
    } 

    return bFlag;
}

int main()
{
    char str[20];
    bool bRet = false;

    printf("Enter the string :");
    scanf("%[^'\n']s " , str);

    printf("%s",str);
    
     bRet = ChkVowel(str);

     if(bRet == false)
     {
        printf("Doesn't contain vowel");
     }
     else
     {
        printf("Contain vowel");
     }     
return 0;
}