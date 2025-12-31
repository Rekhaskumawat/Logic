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
//  Function Name : SumDigit
//  Description :   display sum of element digits
//  Input :         Address
//
///////////////////////////////////////////////////////////////////////////////

void SumDigit(PNODE first)
{
    printf("Output: ");
 
    while(first != NULL)
    {
        int iNo = first->data;
        int iDigit = 0;
        int iSum = 0 ;
        while (iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10 ;
            iSum = iSum +iDigit ;
        }

        printf("| %d |-> " , iSum);

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

    InsertFirst(&head ,240);
    InsertFirst(&head,320);
    InsertFirst(&head,230);
    InsertFirst(&head,110);

    Display(head);
    SumDigit(head);

    return 0 ;

}

///////////////////////////////////////////////////////////////////////////////
//
//   Input linked list : |110| -> |230| -> |320| -> |240| ->NULL
//
//   Output: | 2 |-> | 5 |-> | 5 |-> | 6 |-> NULL
//
///////////////////////////////////////////////////////////////////////////////