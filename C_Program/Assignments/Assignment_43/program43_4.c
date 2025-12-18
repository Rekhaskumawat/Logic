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
//  Date :          18/12/2025
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
//  Function Name : Maximum
//  Description :   return maximum number from linked list
//  Input :         Address
//
///////////////////////////////////////////////////////////////////////////////

int Maximum(PNODE first , int iNo)
{
    int iMax = 0;

    iMax = first->data ;
   
    while(first != NULL)
    {   
        if(iMax < first->data)
        {
            iMax = first->data;
        }
        first = first->next ;
       
    }
    return iMax;
}

///////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
///////////////////////////////////////////////////////////////////////////////


int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,70);
    InsertFirst(&head,30);
    InsertFirst(&head,50);
    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    Display(head);
    iRet = Maximum(head , 30);
    printf("Maximum  elements is : %d ",iRet );

    return 0 ;

}

//////////////////////////////////////////////////////////////////////////////////////
//
//   Input linked list : |10| -> |20| -> |30| -> |40| -> |50| -> |30| -> |70| ->NULL
//
//   Output: Maximum elements is : 70
//
//////////////////////////////////////////////////////////////////////////////////////