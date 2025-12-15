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
//  Function Name : SecMaximum
//  Description :   return second maximum number
//  Input :         Address
//
///////////////////////////////////////////////////////////////////////////////

int SecMaximum(PNODE first)
{
    int iMax = first->data;
    int iSecMax = first->data;
    PNODE iTemp = first ;
    while(first != NULL)
    {
        if(first->data > iMax)
        {
            iMax = first->data;
        }
        first = first->next;
    }

    while(iTemp != NULL)
    {
        if((iTemp->data < iMax) && (iTemp->data > iSecMax))
        {
            iSecMax = iTemp->data;
        }
        iTemp = iTemp->next;
    }

    return iSecMax;
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

    InsertFirst(&head ,240);
    InsertFirst(&head,320);
    InsertFirst(&head,230);
    InsertFirst(&head,110);

    Display(head);
    iRet = SecMaximum(head);

    printf("Second Maximum element : %d", iRet);

    return 0 ;

}

///////////////////////////////////////////////////////////////////////////////
//
//    Input linked list : |110| -> |230| -> |320| -> |240| ->NULL
//   
//    Second Maximum element : 240  
//
///////////////////////////////////////////////////////////////////////////////