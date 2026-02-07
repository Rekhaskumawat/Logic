
//Server

#include<stdio.h>
#include<sys/socket.h>

int main()
{
    int ServerSocket = 0;

    ServerSocket = socket(AF_INET , SOCK_STREAM ,0);

    if(ServerSocket < 0)
    {
        printf("Uanble to create socket\n");
        return -1;
    }

    printf("Socket gets created succesfully with FD :- %d\n",ServerSocket);

    return 0 ;
}