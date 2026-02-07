
// client

#include<stdio.h>           // printf , scanf
#include<string.h>          // memset , memcmp
#include<stdlib.h>          // malloc , free 

#include<unistd.h>          // close , write ,read
#include<fcntl.h>           // creat , unkink

#include<sys/socket.h>      // socket , bind , listen , accept , connect
#include<netinet/in.h>      // sockaddr_in , htons

#include<arpa/inet.h>

int main()
{;
    int ServerSocketfD = 0;
    int iRet = 0 ;
    int port = 11000;

    char  Buffer[1024] = {'\0'};

    struct sockaddr_in Serveraddr ;

    // Step 1 : create TCP socket

    ServerSocketfD = socket(AF_INET , SOCK_STREAM , 0);

    if(ServerSocketfD < 0 )
    {
        printf("unable to create socket \n");
        return -1;
    }

    printf("Socket gets created succesfully with fd :- %d\n", ServerSocketfD);


    // Step 2 : connect with server 

    memset(&Serveraddr ,0 , sizeof(Serveraddr));

    Serveraddr.sin_family = AF_INET ;
    Serveraddr.sin_port = htons(port);

    // 127.0.0.1 -> Binary form

    inet_pton(AF_INET , "127.0.0.1", &Serveraddr.sin_addr);

    iRet = connect(ServerSocketfD ,(struct sockaddr *)&Serveraddr ,sizeof(Serveraddr));

    if(iRet == -1)
    {
        printf("unable to connect with server\n");
        return -1;
    }

    printf("Client succesfully connected with server \n");

    // step 3 : read the data from server

    iRet = read(ServerSocketfD , Buffer , sizeof(Buffer) -1);

    if(iRet <= 0)
    {
        printf("unable to read the data from srver \n");
        return -1 ;
    }

    printf("Data from server is :- %s\n",Buffer);

    // step 4 : close all resouces 

    close(ServerSocketfD);

    printf("Terminating the client application\n");

    return 0 ;
}