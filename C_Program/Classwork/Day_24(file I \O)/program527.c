 
// copied file throw program526.c

#include<stdio.h>
#include<stdlib.h> 
#include<unistd.h>
#include<fcntl.h> 


int main()
{
    int fdSrc = 0 , fdDest = 0;
    char fSrc[100] ={'\0'};
    char fDest[100] = {'\0'};
    char Buffer[100] ={'\0'};
    int iRet = 0;

    printf("Enter the name of source file:-\n");
    scanf("%s", fSrc);

    printf("Enter the name of destination file:-\n");
    scanf(" %s", fDest);

    fdSrc = open(fSrc , O_RDONLY);
    if(fdSrc == -1)
    {
        printf("unable to open Source file\n");
        return -1;
    }

    fdDest = creat(fDest , 0777);
    if(fdDest == -1)
    {
        printf("Unable to create destination file\n");
        close(fdSrc);
        return -1;
    }

    while ((iRet = read(fdSrc , Buffer , sizeof(Buffer))) != 0)
    {
        write(fdDest , Buffer ,iRet);
    }

    printf("File copy Successfully\n");
    close(fdDest);
    close(fdSrc);


    return 0 ;
}