#include<stdio.h>

void StrCpyRev(char *src , char *dist)
{
    int i = 0;
    while( src[i] != '\0')
    {  i++;    }
    i--;
    int j = 0;
    while (i>=0)
    {
        dist[j] = src[i];

        i--;
        j++;
    }   
    dist[j] = '\0';
}

int main()
{
    char Arr[30] = "Marvellous PYthon";
    char Brr[30] ;

    
    StrCpyRev(Arr , Brr);

    printf("%s" ,Brr);

}