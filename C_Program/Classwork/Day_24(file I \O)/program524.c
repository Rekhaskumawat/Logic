 
// take file name from user and count total no of character 'a'

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
    int iCnt = 0 , iCount = 0;

    printf("Enter the name of file :-\n");
    scanf("%s" , fName);

    fd = open(fName , O_RDWR);

    if(fd != -1)
    {
        printf("File successfully opened\n");
        printf("Data from file is :\n");

        while((iRet = read( fd , Buffer , sizeof(Buffer))) != 0)
        {
            for(iCnt = 0; iCnt <iRet ; iCnt++)
            {
                if(Buffer[iCnt] == 'a')
                {
                    iCount++;
                }
            }    
        }

        printf("total 'a' character in file : %d\n", iCount);

        close(fd);
    }
    else
    {
        printf("there is no such file\n");
    }
    return 0 ;
}