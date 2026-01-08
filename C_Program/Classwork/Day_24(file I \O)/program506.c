
// system call (open()) and (write()) and (close()) to  an existing file

#include<stdio.h>
#include<stdlib.h> 
#include<unistd.h>
#include<fcntl.h>


int main()
{
    int fd = 0;

    fd =  open("PPA.txt", O_RDWR );                 // unable to open file

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets opened successfully with fd :%d", fd);
        write(fd , "Jay Ganesh" ,10);
        close(fd);
    }
    return 0 ;
}