#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int CountWhiteSpaces(char *fname  )
{
    int fd = 0;
    char Arr[1024];
    int Count = 0 , iRet = 0;

    fd = open(fname , O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open file \n");
        return 0;
    }

    iRet = read(fd , Arr ,1024);
    printf("%d bytes read successfully\n" , iRet);

    for(int i = 0 ; i <iRet ; i++)
    {
        if(Arr[i] == 32)
        {
            Count++;
        }
    }

    close(fd);
    return Count;    
}

int main()
{
    char FName[20];

    printf("Enter the file Name:\n");
    scanf("%[^'\n']s" , &FName);

    int iRet = CountWhiteSpaces(FName);
    printf("No of  White Spaces are : %d \n" , iRet);

}