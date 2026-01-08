
// system call read() to read data from existinf file

#include<stdio.h>
#include<stdlib.h> 
#include<unistd.h>
#include<fcntl.h> 


int main()
{
    int fd = 0;
    int iRet = 0;
    char buffer[100] = {'\0'};

    fd = open("JanuaryX.txt" , O_RDONLY);

    if(fd != -1)
    {
        printf("File gets opened with FD : %d\n", fd);

        iRet = read(fd , buffer , 11);
        printf("Data from file is :%s\n", buffer);
        close(fd);
    }
    return 0 ;
}