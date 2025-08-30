#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>

int main()
{
    int fd = 0;
    char Name[20];
    char Arr[20] = {'\0'};
    struct stat st;

    printf("Enter the name of file to Open:\n");
    scanf("%s",Name);

    fd = open(Name , O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to Open the file\n");
    }
    else
    {
        printf("FIle Opened succefully\n");

       if(stat(Name, &st) == 0)
       {
        printf("Size of file %s is : %ld\n", Name , st.st_size);
       }
       else
       {
        perror("stat failed");
       }
    }

    close(fd);


    return 0 ;
}