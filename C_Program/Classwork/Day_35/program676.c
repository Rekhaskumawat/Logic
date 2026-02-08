#include<stdio.h>

int main(int argc , char*argv[])
{
    printf("Number of command line arguments are : %d\n",argc);

    if (argc != 5)
    {
        printf("Uable to proceed as invalid number od arguments\n");
        printf("Please provide : \n");
        printf("IP Address \n Port Number \n Targeted File Name \n New File Name");
        return -1 ;
    }
    printf("Executable Name : %s\n",argv[0]);
    printf("IP Address : %s\n",argv[1]);
    printf("Port Number : %s\n",argv[2]);
    printf("Targeted File : %s\n",argv[3]);
    printf("New File Name : %s\n",argv[4]);

    return 0 ;
}