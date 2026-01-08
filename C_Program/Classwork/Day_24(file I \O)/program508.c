
// system call (open()) and (write()) and (close()) to  an existing file if does not exist than create

#include<stdio.h>
#include<stdlib.h> 
#include<unistd.h>
#include<fcntl.h> 


int main()
{
    int fd = 0;

    fd =  open("January.txt", O_RDWR | O_CREAT , 0777);             

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets opened successfully with fd :%d", fd);
        write(fd , "Jay Ganesh" ,3);
        close(fd);
    }
    return 0 ;
}