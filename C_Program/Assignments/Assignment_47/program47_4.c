///////////////////////////////////////////////////////////////////////////////
//
//required header file
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>           // for standard input output
#include<stdlib.h>          // for dynamic memory allocation

///////////////////////////////////////////////////////////////////////////////
//
//structure for Node
//
//////////////////////////////////////////////////////////////////////////////

struct node
{
    int data ;

    struct node *next ;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node** PPNODE ;

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : InsertFirst
//  Description :   insert data into linked list
//  Input :         Address , Integer
//  Author :        Rekha Shankarlal Kumawat
//  Date :          31/12/2025
//
///////////////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE first , int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));      // dynamic memory allocation for every node

    newn->next = NULL;
    newn->data = no;

    if(*first == NULL)
    {
        *first = newn ;
    }
    else
    {
        newn->next =*first;
        *first = newn;
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
    int iCnt = 0;
    printf("Input linked list :");

    while(first != NULL)
    {
        printf(" |%d| ->",first->data);
        first = first->next ;
    }
    printf("NULL\n");
}
///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayPrime
//  Description :   Display the Prime number
//  Input :         Address
//
///////////////////////////////////////////////////////////////////////////////

void DisplayPrime(PNODE first)
{
    int iCnt = 0;
    int iCount= 0 ;

    printf("Output: ");
    while(first != NULL)
    {
        for(iCnt = 2 , iCount = 0; iCnt <= (first->data); iCnt++ )
        {
            if((first->data)% iCnt == 0)
            {
                iCount++;
            }
        }

        if(iCount == 1)
        {
            printf(" |%d| ->",first->data);
        }
        first = first->next ;
    }
    printf("NULL\n");
}

///////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
///////////////////////////////////////////////////////////////////////////////


int main()
{
    PNODE head = NULL;

    InsertFirst(&head ,89);
    InsertFirst(&head,6);
    InsertFirst(&head,41);
    InsertFirst(&head,17);
    InsertFirst(&head,28);
    InsertFirst(&head,11);

    Display(head);
    DisplayPrime(head);

    return 0 ;

}

///////////////////////////////////////////////////////////////////////////////
//
//   Input linked list : |11| -> |28| -> |17| -> |41| -> |6| -> |89| ->NULL
// 
//   Output:  |11| -> |17| -> |41| -> |89| ->NULL
//
///////////////////////////////////////////////////////////////////////////////