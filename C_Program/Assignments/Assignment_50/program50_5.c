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
//  Date        : 01/01/2026
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
//  Function Name : Display
//  Description :   display the Linked list 
//  Input :         Address
//
///////////////////////////////////////////////////////////////////////////////

void Display(PNODE first)
{
    printf("Input linked list :");

    while(first != NULL)
    {
        printf(" |%d| ->",first->data);
        first = first->next ;
    }
    printf("NULL\n");
}
//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayNthNode
//  Discription   : Display Nth Node  elements
//
//////////////////////////////////////////////////////////////////////////////////////////////////


void DisplayNthNode(PNODE first , int pos)
{
    int length = 0 ;
    int targetpos = 0;
    int iCnt = 0;
    PNODE temp = first;

    while(first != NULL)
    {
        length++;
        first = first->next;
    }

    targetpos =  length - pos;

    printf("Output:-");
    for(iCnt = 1 ; iCnt <= targetpos ; iCnt++)
    {
        printf("| %d |->", temp->data);
        temp = temp ->next;
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
//////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    PNODE head = NULL ;

    InsertFirst(&head , 51);
    InsertFirst(&head , 22);
    InsertFirst(&head , 111);
    InsertFirst(&head ,100);
    InsertFirst(&head ,111);
    InsertFirst(&head ,121);
    InsertFirst(&head ,152);
    Display(head);
    DisplayNthNode(head , 2);

    return 0 ;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Input linked list : |152| -> |121| -> |111| -> |100| -> |111| -> |22| -> |51| ->NULL
//    Output:- | 152 |->| 121 |->| 111 |->| 100 |->| 111 |->
//
//////////////////////////////////////////////////////////////////////////////////////////////////