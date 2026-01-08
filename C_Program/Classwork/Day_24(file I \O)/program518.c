
// system call read() to read data from existing file  (when open file again the offset is set to 0)

#include<stdio.h>
#include<stdlib.h> 
#include<unistd.h>
#include<fcntl.h> 


int main()
{
    int fd = 0;
    int iRet = 0;
    char buffer[100] = {'\0'};
    char Arr[10] = {'\0'};

    fd = open("JanuaryX.txt" , O_RDONLY);

    printf("File gets opened with FD : %d\n", fd);

    iRet = read(fd , buffer , 11);
    printf("Data from file is :\n");
    write(1 , buffer , iRet);                           // issue solved data will be displayed on screen 1(stdout)
    printf("\nReturn value of read is : %d\n", iRet);

    close(fd);
    
    fd = open("JanuaryX.txt" , O_RDONLY);    
    iRet = read(fd , Arr , 10);
    printf("Data from file is :\n");
    write(1 , Arr , iRet);                              // issue solved
    printf("\nReturn value of read is : %d\n", iRet);

    close(fd);

    return 0 ;
}