

#include<stdio.h>
#include<stdlib.h> 
#include<unistd.h>
#include<fcntl.h> 


int main()
{
    int fd = 0;
    int iRet = 0;
    char Arr[] = "PUNE";
    fd =  open("JanuaryX.txt", O_RDWR);             // over write issue

    if(fd == -1)
    {
        printf("Unable to open file\n");
    } 
    else
    {
        printf("File gets opened successfully with fd :%d\n", fd);
        iRet = write(fd , Arr,3);
        printf("%d bytes gets written into file successfully \n" , iRet);
        close(fd);
    }
    return 0 ;
}