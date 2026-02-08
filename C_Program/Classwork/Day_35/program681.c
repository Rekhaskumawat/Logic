#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{   
    int iRet = 0;

    iRet = fork();

    if(iRet == 0)
    {
        printf("Child Process is running With PID :- %d\n", getpid());
    }
    else
    {
        printf("Parent process is running with PID :- %d\n", getppid());
        printf("PID of Child is :- %d\n",iRet);
    }

    return 0 ;
}