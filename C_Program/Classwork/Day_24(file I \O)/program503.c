
// system call (creat()) to create a new file

#include<stdio.h>
#include<stdlib.h> 
#include<unistd.h>
#include<fcntl.h>


int main()
{
    int fd = 0;
    fd =  creat("LB.txt",0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File gets created successfully with fd :%d", fd);
    }
    return 0 ;
}