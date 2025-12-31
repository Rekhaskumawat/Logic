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
//  Function Name : Countless
//  Description :   count the smaller number than the input
//  Input :         Address
//
///////////////////////////////////////////////////////////////////////////////

int Countless(PNODE first , int iNo)
{
    int iCount = 0;

    while(first != NULL)
    {   
        
        if(first->data < iNo)
        {
            iCount++;
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
    InsertFirst(&head , 12);
    InsertFirst(&head , 110);
    InsertFirst(&head ,101);
    InsertFirst(&head ,22);
    InsertFirst(&head ,121);
    InsertFirst(&head ,51);

    iRet = Countless(head , iValue);
    printf("elements less than %d are %d", iValue ,iRet );


    return 0 ;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Input : 101                    output : elements less than 101 are 4
//    Input : 51                     output : elements less than 51 are 2
//
//////////////////////////////////////////////////////////////////////////////////////////////////