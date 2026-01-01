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
//
///////////////////////////////////////////////////////////////////////////////

void Display(PNODE first )
{
    while(first != NULL)
    {   
        printf("| %d |->", first->data);
        first = first->next ;
    }
    printf("NULL\n");
}

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckSorted
//  Description :   check whether elements are sorted in ascending order
//  Input :         Address
//
///////////////////////////////////////////////////////////////////////////////

bool CheckSorted(PNODE first )
{
    if (first == NULL || first->next == NULL)
    {
        return true;   
    }

    int iNum = first->data;
    
    while (first != NULL)
    {
        if (first->data < iNum)
        {
            return false;
        }
        first = first->next;
    }
    return true;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
//////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    PNODE head = NULL ;
    bool bRet = false;

    InsertFirst(&head , 51);
    InsertFirst(&head , 12);
    InsertFirst(&head , 11);
    InsertFirst(&head ,101);
    InsertFirst(&head ,22);
    InsertFirst(&head ,121);
    InsertFirst(&head ,51);
    Display(head);
    bRet = CheckSorted(head);

    if(bRet == true)
    {
        printf("List is sorted in Ascending order\n");
    }
    else
    {
        printf("List is not sorted in Ascending order\n");
    }


    return 0 ;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Input : | 51 |->| -121 |->| -22 |->| 101 |->| -11 |->| 12 |->| 51 |->NULL
//     Output:- List is not sorted in Ascending order
//
//////////////////////////////////////////////////////////////////////////////////////////////////