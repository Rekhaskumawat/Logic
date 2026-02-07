
// client

#include<stdio.h>           // printf , scanf
#include<string.h>          // memset , memcmp
#include<stdlib.h>          // malloc , free 

#include<unistd.h>          // close , write ,read
#include<fcntl.h>           // creat , unkink

#include<sys/socket.h>      // socket , bind , listen , accept , connect
#include<netinet/in.h>      // sockaddr_in , htons

int main()
{;
    int ServerSocketfD = 0;

    // Step 1 : create TCP socket

    ServerSocketfD = socket(AF_INET , SOCK_STREAM , 0);

    if(ServerSocketfD < 0 )
    {
        printf("unable to create socket \n");
        return -1;
    }

    printf("Socket gets created succesfully with fd :- %d\n", ServerSocketfD);

    return 0 ;
}