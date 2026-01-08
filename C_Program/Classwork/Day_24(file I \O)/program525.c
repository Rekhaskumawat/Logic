 
// take 2 file name from user and copy data from first file into second new file

#include<stdio.h>
#include<stdlib.h> 
#include<unistd.h>
#include<fcntl.h> 


int main()
{
    int fdSrc = 0 , fdDest = 0;
    char fSrc[100] ={'\0'};
    char fDest[100] = {'\0'};

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
        return -1;
    }

    return 0 ;
}