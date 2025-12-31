//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Structure for a node of singly linked list
//
//////////////////////////////////////////////////////////////////////////////////////////////////

struct node
{
    int data ; 
    struct node*next;
};

typedef struct node NODE;
typedef struct node* PNODE ;
typedef struct node** PPNODE;

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : implementation of Singly Linear Linked List
// Function     : InsertFirst
// Description  : Insert node at beginning
//  Author      : Rekha Kumawat
//  Date        : 31/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE first , int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data= iNo ;
    newn->next =  NULL;

    if((*first) == NULL)
    {
        (*first) = newn;
    }
    else
    {
        newn->next = (*first);
        (*first) = newn;
    }
}

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : LastOcc
//  Description :   search Last occurance of the element
//  Input :         Address
//
///////////////////////////////////////////////////////////////////////////////

int LastOcc(PNODE first , int iNo)
{
    int iCount = 0;
    int iCnt = 0;

    while(first != NULL)
    {   
        iCount++;
        
        if(first->data == iNo)
        {
            iCnt = iCount;
        }
        first = first->next ;
       
    }
    return iCnt;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
//////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    PNODE head = NULL ;
    int iRet = 0 ;
    int iValue =0 ;

    printf("Enter the number :-\n");
    scanf("%d",&iValue);

    InsertFirst(&head , 51);
    InsertFirst(&head , 22);
    InsertFirst(&head , 110);
    InsertFirst(&head ,101);
    InsertFirst(&head ,22);
    InsertFirst(&head ,121);
    InsertFirst(&head ,51);

    iRet = LastOcc(head , iValue);
    printf("%d last occures at %d possition", iValue ,iRet );


    return 0 ;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Input : 22                    output : 22 last occures at 6 possition
//    Input : 51                    output : 51 last occures at 7 possition
//
//////////////////////////////////////////////////////////////////////////////////////////////////