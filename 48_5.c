#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int CountChar(char *fname  , char ch )
{
    int fd = 0;
    char Arr[1024];
    int Count = 0 , iRet = 0;
    int Alphabet = (int)ch;

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
        if(Arr[i] == Alphabet)
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
    char ch;

    printf("Enter the file Name:\n");
    scanf("%[^'\n']s" , &FName);

    printf("enter character : \n");
    scanf(" %c" , &ch);

    int iRet = CountChar(FName , ch);
    printf("No of M  are : %d \n" , iRet);

}