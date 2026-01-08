
// system call (open()) and (write()) and (close()) to  an existing file if does not exist than create

#include<stdio.h>
#include<stdlib.h> 
#include<unistd.h>
#include<fcntl.h> 


int main()
{
    int fd = 0;
    int iRet = 0;

    fd =  open("January.txt", O_RDWR | O_CREAT , 0777);             

    if(fd == -1)
    {
        printf("Unable to open file\n");
    } 
    else
    {
        printf("File gets opened successfully with fd :%d\n", fd);
        iRet = write(fd , "Jay Ganesh" ,3);
        printf("%d bytes gets written into file successfully \n" , iRet);
        close(fd);
    }
    return 0 ;
}