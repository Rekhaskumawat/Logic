
//Server

#include<stdio.h>           // printf , scanf
#include<string.h>          // memset , memcmp
#include<stdlib.h>          // malloc , free 

#include<unistd.h>          // close , write ,read
#include<fcntl.h>           // creat , unkink

#include<sys/socket.h>      // socket , bind , listen , accept , connect
#include<netinet/in.h>      // sockaddr_in , htons

/*
    struct sockaddr
    {
        sa_family_t sa_family;
        char sa_data[14];
    };
*/
int main()
{
    int ServerSocket = 0;
    int iRet = 0;
    int port = 11000;

    struct sockaddr_in Serveraddr ;

    //Step : Create TCP socket

    ServerSocket = socket(AF_INET , SOCK_STREAM ,0);

    if(ServerSocket < 0)
    {
        printf("Uanble to create socket\n");
        return -1;
    }

    printf("Socket gets created succesfully with FD :- %d\n",ServerSocket);

    // Step2 : Attach the socket to IP address & port number

    // Set memory with 0
    memset(&Serveraddr , 0 ,sizeof(Serveraddr));

    // structure memeber of  sockaddr_in

    Serveraddr.sin_family = AF_INET;                // AF_INET

    // sin_addr is object of in_addr structure and s_addr is member of in_addr structure

    Serveraddr.sin_addr.s_addr = INADDR_ANY;        // IPV4 address  
    Serveraddr.sin_port = htons(port) ;             // port number


    iRet = bind(ServerSocket ,(struct sockaddr*)&Serveraddr,sizeof(Serveraddr));

    if(iRet == -1)
    {
        printf("Bined System call failed\n");
        close(ServerSocket);
        return -1;
    }

    printf("Bind operation with socket is succesfull\n");

    return 0 ;
}