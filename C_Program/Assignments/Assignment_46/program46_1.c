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
//  Function Name : DisplayGreater
//  Description :   Display the greater number than the input
//  Input :         Address
//
///////////////////////////////////////////////////////////////////////////////

void DisplayGreater(PNODE first , int iNo)
{
    while(first != NULL)
    {   
        
        if(first->data > iNo)
        {
            printf("| %d |->", first->data);
        }
        first = first->next ;
    }
    printf("NULL\n");
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
//////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    PNODE head = NULL ;
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

    DisplayGreater(head , iValue);


    return 0 ;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Input : 22                    output : | 51 |->| 121 |->| 101 |->| 110 |->| 51 |->NULL
//    Input : 51                    output : | 121 |->| 101 |->| 110 |->NULL
//
//////////////////////////////////////////////////////////////////////////////////////////////////