#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char Name[20];

    printf("Enter the name of file to open:\n");
    scanf("%s",Name);

    fd = open(Name , O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        printf("FIle opened succefully\n");
    }

    close(fd);


    return 0 ;
}