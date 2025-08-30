#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char Name[20];
    char Arr[20] = {'\0'};

    printf("Enter the name of file to Open:\n");
    scanf("%s",Name);

    fd = open(Name , O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to Open the file\n");
    }
    else
    {
        printf("FIle Opened succefully\n Enter Data to enter into file :\n");
        scanf(" %[^'\n']s",Arr);

        int iRet  = write(fd , Arr , 10);
        printf("%d bytes written succefully\n",iRet);

    }
    printf("%s\n" , Arr);

    close(fd);


    return 0 ;
}