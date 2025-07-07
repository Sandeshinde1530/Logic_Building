#include<stdio.h>

void Display()
{
    int i = 0;
    char Arr[] = "Marvellous";

    for(i = 0; i< 5;i++)
    {
        printf("%d. %s\n",i+1,Arr);
    }

}

int main()
{
    Display();
    return 0;
}
