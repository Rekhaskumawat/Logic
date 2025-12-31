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
//  Function Name : Difference
//  Discription   : difference between the max and min element
//
//////////////////////////////////////////////////////////////////////////////////////////////////


int Difference(PNODE first )
{
    int max = first->data ;
    int min = first->data;

    while(first != NULL)
    {
        if(first->data > max)
        {
            max = first->data;
        }
        else if(first->data < min)
        {
            min = first->data;
        }
        else
        {

        }
        first = first->next;
    }
    return max-min;

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
    InsertFirst(&head ,111);
    InsertFirst(&head ,121);
    InsertFirst(&head ,152);
    Display(head);
    iRet = Difference(head);

    printf("Difference between maximum and minimum element :- %d", iRet);

    return 0 ;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Input linked list : |152| -> |121| -> |111| -> |100| -> |111| -> |22| -> |51| ->NULL
//    Difference between maximum and minimum element :- 130
//
//////////////////////////////////////////////////////////////////////////////////////////////////