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
//  Function Name : FirstOcc
//  Description :   search first occurance of the element
//  Input :         Address
//
///////////////////////////////////////////////////////////////////////////////

int FirstOcc(PNODE first , int iNo)
{
    int iCount = 0;

    while(first != NULL)
    {   
        iCount++;
        
        if(first->data == iNo)
        {
            break;
        }
        first = first->next ;
       
    }
    return iCount;
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
    InsertFirst(&head ,222);
    InsertFirst(&head ,121);
    InsertFirst(&head ,122);

    iRet = FirstOcc(head , iValue);
    printf("%d occures at %d possition", iValue ,iRet );


    return 0 ;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Input : 222                   output : 222 occures at 3 possition
//    Input : 51                    output : 51 occures at 7 possition
//
//////////////////////////////////////////////////////////////////////////////////////////////////