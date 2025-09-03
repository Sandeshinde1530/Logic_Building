#include<stdio.h>
#include<io.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>

int CountCapital(char FName[])
{
    int fd = 0;
    int iRet = 0;
    char Arr[1024];
    int iCount = 0;

    fd = open(FName , O_RDWR);
    if(fd == -1)
    {
        perror("unable to open file\n");
    }
    else
    {
        printf("File opened succefully\n");
        iRet = read(fd ,Arr ,1024);
        printf("%d\n",iRet);
        Arr[iRet] = '\0';
        
    }

    for(int i = 0 ; i < iRet ; i++)
    {
        if( Arr[i] >=65 && Arr[i] <= 90)
        {
            iCount++;
        }
    }
    close(fd);
    return iCount;
}

int main()
{
    char Name[20];
    int iRet = 0;

    printf("Enter the file name:\n");
    scanf("%[^'\n']s" , Name);

    iRet = CountCapital(Name);
    printf("Count of capital letter in the file is : %d\n",iRet);


    return 0;
}