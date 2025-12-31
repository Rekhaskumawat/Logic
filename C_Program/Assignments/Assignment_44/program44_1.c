//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

//////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Search
// Description   : search the element
// 
//////////////////////////////////////////////////////////////////////////////////////////////////


bool Search(PNODE first , int iNo)
{
    while ((first != NULL))
    {
        if(first->data == iNo)
        {
            return true;
        }
        first = first->next ;
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
    int iValue = 0;
    bool bRet = false ;

    printf("enter number to be Searched in linked list :-\n");
    scanf("%d", &iValue);

    InsertFirst(&head , 51);
    InsertFirst(&head , 21);
    InsertFirst(&head , 11);
    InsertFirst(&head ,101);
    InsertFirst(&head ,111);
    InsertFirst(&head ,121);
    InsertFirst(&head ,105);

    bRet = Search(head , iValue);

    if(bRet == true)
    {
        printf("%d is present in linked list ",iValue );
    }
    else
    {
        printf("%d is not  present in linked list ",iValue );
    }
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1 : 51                 output : 51 is present in linked list
//  Input1 : 110                output : 110 is not present in linked list 
//
//////////////////////////////////////////////////////////////////////////////////////////////////