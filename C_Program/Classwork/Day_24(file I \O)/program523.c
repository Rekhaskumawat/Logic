 
// take file name from user and display total size of file

#include<stdio.h>
#include<stdlib.h> 
#include<unistd.h>
#include<fcntl.h> 


int main()
{
    int fd = 0 , iRet = 0;
    char fName[100] = {'\0'};
    char Buffer[100] = {'\0'};
    int iSum = 0;

    printf("Enter the name of file :-\n");
    scanf("%s" , fName);

    fd = open(fName , O_RDWR);

    if(fd != -1)
    {
        printf("File successfully opened\n");
        printf("Data from file is :\n");

        while((iRet = read( fd , Buffer , sizeof(Buffer))) != 0)
        {
            iSum = iSum+iRet;     
        }
        printf("total size of file : %d\n", iSum);

        close(fd);
    }
    else
    {
        printf("there is no such file\n");
    }
    return 0 ;
}