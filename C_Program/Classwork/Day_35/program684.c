
// Client Application

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Header file Inclusion
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdbool.h>

#include<stdio.h>           // printf , scanf
#include<string.h>          // memset , memcmp
#include<stdlib.h>          // malloc , free 

#include<unistd.h>          // close , write ,read
#include<fcntl.h>           // creat , unkink

#include<sys/socket.h>      // socket , bind , listen , accept , connect
#include<netinet/in.h>      // sockaddr_in , htons

#include<arpa/inet.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  CommandLine Argumnet Application
//  1st Argument :  IP Address
//  2nd Argument :  Port Number
//  3rd Argument :  Targeted File Name
//  4rd Argument :  New File Name
//
//  ./Client  127.0.0.1   9000      Demo.txt    A.txt
//   argv[0]  argv[1]    argv[2]    argv[3]    argv[4]
//
//////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc , char*argv[])
{   
    int Sock = 0;
    int Port = 0;       //argv[2]
    int iRet = 0;

    struct sockaddr_in ServerAddr;

    char*FileName = NULL;        //argv[3]
    char*OutFileName = NULL;     //argv[4]
    char*ip = NULL;              //srgv[1]

 
    if((argc <5) || (argc >5))
    {
        printf("Unable to proceed due to invalid number of arguments \n");

        printf("Please provide below arguments : \n");
        printf("1st Argument :  IP Address\n");
        printf("2nd Argument :  Port Number\n");
        printf("3rd Argument :  Targeted File Name\n");
        printf("4rd Argument :  New File Name\n");

        return -1;
    }

    // Store command line arguments into the variables

    ip = argv[1];
    Port = atoi(argv[2]);
    FileName = argv[3];
    OutFileName = argv[4];

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Step 1 : Create TCP Socket
//
//////////////////////////////////////////////////////////////////////////////////////////////

    Sock = socket(AF_INET ,SOCK_STREAM , 0);

    if(Sock < 0)
    {
        printf("Unable to create the Client Socket\n");
    }

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Step 2 :    Connect with Server
//
//////////////////////////////////////////////////////////////////////////////////////////////

    memset(&ServerAddr , 0 , sizeof(ServerAddr));

    ServerAddr.sin_family = AF_INET;
    ServerAddr.sin_port = htons(Port);

    // convert the IP address into binary format

    inet_pton(AF_INET, ip ,&ServerAddr.sin_addr);

    iRet = connect(Sock , (struct sockaddr*)&ServerAddr , sizeof(ServerAddr));

    if(iRet == -1)
    {
        printf("Unable to connect with Server\n");
        close(Sock);
        return -1;
    }

    // Sending file name to server 
    
    write(Sock ,FileName , sizeof(FileName));


    return 0 ;
}// End of Main