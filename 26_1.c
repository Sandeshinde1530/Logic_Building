#include<stdio.h>

void PrintAscii()
{
    for(int i = 0 ; i <= 255 ; i++)
    {
        printf("%c\t%d\t0X%x\t0%o\n" ,i , i , i , i);
    }
}

int main()
{
    PrintAscii();
    return 0;
}