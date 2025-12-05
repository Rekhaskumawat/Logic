#include<stdio.h>
#include<stdlib.h>                                     // for dynamic memory allocation

#pragma pack(1)                                       // for avoiding padding

struct node
{
    int data ;
    struct node*next;
};

typedef struct node NODE ;
typedef struct node* PNODE ;
typedef struct node ** PPNODE ;

void InsertFirst(PPNODE first , int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if(*first == NULL)              // linked list is empty
    {
        (*first) = newn ;
    }
    else                           // linkedlist have atleast one node
    {
        newn->next =(*first);
        (*first) = newn ;
    }
}

void InsertLast(PPNODE first , int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if(*first == NULL)              // linked list is empty
    {
        *first = newn ;
    }
    else                           // linkedlist have atleast one node
    {

    }
}
int main()
{
    PNODE head = NULL;
    InsertFirst(&head , 51);
    InsertFirst(&head , 21);
    InsertFirst(&head , 11);
    return 0;
}