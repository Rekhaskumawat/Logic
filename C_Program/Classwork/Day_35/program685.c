
// Server

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
//  1st Argument :  Port Number
//  ./Server    9000
//   argv[0]    argv[1]
//
//////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc , char*argv[])
{
    int ServerSocket = 0;
    int ClientSocket = 0;
    int Port = 0;
    int iRet = 0;
    
    struct sockaddr_in ServerAddr;
    struct sockaddr_in ClientAddr ;

    socklen_t AddrLen = sizeof(ClientAddr);

    char FileName[50] = {'\0'};
    
    pid_t pid = 0;  

    if((argc < 2) || (argc > 2) )
    {
        printf("Unable to processed as invalid number of argument\n");
        printf("Please provide the port number\n");
        return -1 ;

    }

    // port Number of Server
    Port = atoi(argv[1]);

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Step 1 : Create TCP Socket
//
//////////////////////////////////////////////////////////////////////////////////////////////

ServerSocket =  socket(AF_INET , SOCK_STREAM , 0);

if(ServerSocket < 0)
{
    printf("Uable to create server socket\n");
    return -1;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Step 2 : Bind Socket to IP and Port
//
//////////////////////////////////////////////////////////////////////////////////////////////

memset(&ServerAddr , 0 ,sizeof(ServerAddr));

// Initialise the structure 

ServerAddr.sin_family = AF_INET;
ServerAddr.sin_port = htons(Port);
ServerAddr.sin_addr.s_addr =INADDR_ANY;

iRet = bind(ServerSocket , (struct sockaddr*)&ServerAddr , sizeof(ServerAddr));

if(iRet == -1)
{
    printf("unable to bind IP and Port\n");
    close(ServerSocket);
    return -1 ;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Step 3 : Listen for client connections
//
//////////////////////////////////////////////////////////////////////////////////////////////

iRet = listen(ServerSocket ,11);

if(iRet == -1)
{
    printf("Server is unable to listen the request\n");
    close(ServerSocket);
    return -1;
}

printf("Server is running on port : %d\n",Port);

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Loop which accept Multiple client requests continiously
//
//////////////////////////////////////////////////////////////////////////////////////////////

while(1)
{

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Step 4 : Accept The Client Request
//
//////////////////////////////////////////////////////////////////////////////////////////////

    memset(&ClientAddr , 0 ,sizeof(ClientAddr));

    printf("Server is waiting for Client request\n");

    ClientSocket = accept(ServerSocket , (struct sockaddr *)&ClientAddr , &AddrLen);

    if(ClientSocket < 0)
    {
        printf("Unable to accept client request\n");
        
        continue;   // Used for while
    }
    
    printf("Client gets connected : %s\n", inet_ntoa(ClientAddr.sin_addr));

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Step 5 : Create New process to handle client request
//
//////////////////////////////////////////////////////////////////////////////////////////////

    pid = fork();

    if(pid < 0)
    {
        printf("Uable to create a new process for client request \n");
        close(ClientSocket);
        
        continue ;
    }
    // new process gets created for client

    if(pid == 0)
    {
        printf("New process is created for client request \n");
        close(ServerSocket);

        iRet = read(ClientSocket , FileName, sizeof(FileName));

        printf("Requested file by Client : %s\n", FileName);

        break;      // IMP but need to remove

    }
}// End of While

return 0 ;
}// End of Main