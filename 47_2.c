#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char Name[20];

    printf("Enter the name of file to create:\n");
    scanf("%s",Name);

    fd = creat(Name , 0777);

    if(fd == -1)
    {
        printf("Unable to create the file\n");
    }
    else
    {
        printf("FIle createed succefully\n");
    }

    close(fd);


    return 0 ;
}