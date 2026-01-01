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
//  Function Name : DisplayGreaterThanAvg
//  Description :   Display elements greater than average
//  Input :         Address
//
///////////////////////////////////////////////////////////////////////////////

void DisplayGreaterThanAvg(PNODE first )
{
    int iCount = 0;
    int iAvg = 0;
    int iSum = 0 ;
    PNODE temp = NULL;
    temp = first;
    while(first != NULL)
    {   
        iCount++;
        iSum = iSum + first->data;
        first = first->next ;
    }

    iAvg = iSum/iCount;
    printf("Output:- ");

    while (temp != NULL)
    {
        if(temp->data > iAvg)
        {
            printf("| %d |->",temp->data);
        }
        temp = temp->next;
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

    InsertFirst(&head , 51);
    InsertFirst(&head , 12);
    InsertFirst(&head , -11);
    InsertFirst(&head ,101);
    InsertFirst(&head ,-22);
    InsertFirst(&head ,-121);
    InsertFirst(&head ,51);
    Display(head);
    DisplayGreaterThanAvg(head);


    return 0 ;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Input : | 51 |->| -121 |->| -22 |->| 101 |->| -11 |->| 12 |->| 51 |->NULL
//     Output:- | 51 |->| 101 |->| 12 |->| 51 |->NULL
//
//////////////////////////////////////////////////////////////////////////////////////////////////