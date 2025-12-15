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
//  Date :          15/12/2025
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
//  Function Name : AdditionEven
//  Description :   return sum of Even numbers
//  Input :         Address
//
///////////////////////////////////////////////////////////////////////////////

int AdditionEven(PNODE first)
{
    int iCnt = 0;
    int iSum= 0 ;

    while(first != NULL)
    {
    
        if((first->data)% 2 == 0)
        {
            iSum = iSum +(first->data);
        }

        first = first->next ;
    }
    
    return iSum ;
}

///////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
///////////////////////////////////////////////////////////////////////////////


int main()
{
    PNODE head = NULL;
    int iRet = 0 ;

    InsertFirst(&head ,41);
    InsertFirst(&head,32);
    InsertFirst(&head,20);
    InsertFirst(&head,11);

    Display(head);
    iRet = AdditionEven(head);

    printf("Addition of Even element is : %d", iRet);

    return 0 ;

}

///////////////////////////////////////////////////////////////////////////////
//
//  Input linked list : |11| -> |20| -> |32| -> |41| ->NULL
//
//  Addition of Even element is : 52
//
///////////////////////////////////////////////////////////////////////////////