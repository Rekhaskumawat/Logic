
// take file name from user and open

#include<stdio.h>
#include<stdlib.h> 
#include<unistd.h>
#include<fcntl.h> 


int main()
{
    int fd = 0 , iRet = 0;
    char fName[100] = {'\0'};

    printf("Enter the name of file :-\n");
    scanf("%s" , fName);

    fd = open(fName , O_RDWR);

    if(fd != -1)
    {
        printf("File successfully opened\n");
        close(fd);
    }
    else
    {
        printf("there is no such file\n");
    }
    return 0 ;
}