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
//  Function Name : CountTwoDigits
//  Discription   : count  two digit element 
//
//////////////////////////////////////////////////////////////////////////////////////////////////


int CountTwoDigits(PNODE first )
{
    int iTwoDigit = 0;
    while(first != NULL)
    {
        int iNo = first->data;
        int iDigit = 0;
        int iCount = 0;
        while (iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10 ;
            iCount++;
        }
        if(iCount == 2)
        {
            iTwoDigit++;
        }
        first = first->next ;
       
    }
    return iTwoDigit;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
//////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    PNODE head = NULL ;
    int iRet = 0;

    InsertFirst(&head , 51);
    InsertFirst(&head , 22);
    InsertFirst(&head , 111);
    InsertFirst(&head ,100);
    InsertFirst(&head ,-122);
    InsertFirst(&head ,121);
    InsertFirst(&head ,152);
    Display(head);

    iRet = CountTwoDigits(head);
    printf("Total two digit elements are :- %d", iRet);

    return 0 ;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Input linked list : |152| -> |121| -> |-122| -> |100| -> |111| -> |22| -> |51| ->NULL
//    Total two digit elements are :- 2
//
//////////////////////////////////////////////////////////////////////////////////////////////////