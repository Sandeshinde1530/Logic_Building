#include<stdio.h>

void StrCpyX(char *src , char *dist)
{
   
    int j = 0 , k = 0;
    while ( src[j] != '\0')
    {
        if(src[j] == ' ' )
        {
            j++;            
        }
        else
        {
           dist[k] = src[j];
           j++ , k++; 
        }
        
    }   
    dist[k] = '\0';
}

int main()
{
    char Arr[30] = "Marvel lous PY thon";
    char Brr[30] ;


    StrCpyX(Arr , Brr);

    printf("%s" ,Brr);

}