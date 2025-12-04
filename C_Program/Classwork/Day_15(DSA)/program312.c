#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
    int data;
    struct node * next ;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE ;

// call by value

void Display(PNODE first)
{}
int Count(PNODE first)
{
    return 0;
}

// call by address

void InsertFirst(PPNODE first , int No)
{}

void InsertLast(PPNODE last , int NO)
{}

void InsertAtPos(PPNODE first , int No , int pos)
{}

int main()
{
    PNODE head = NULL ;

    Display(head);
    Count(head);

    InsertFirst(&head , 11);
    InsertLast(&head ,21);
    InsertAtPos(&head , 31 , 3);
    return 0;
}
