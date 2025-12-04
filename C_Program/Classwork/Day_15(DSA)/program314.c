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

// call by value(traversal)

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("%d\t",first->data);
        first = first->next;
    }
    printf("\n");
}
int Count(PNODE first)
{
    return 0;
}

// call by address(insert)

void InsertFirst(PPNODE first , int No)
{}

void InsertLast(PPNODE last , int NO)
{}

void InsertAtPos(PPNODE first , int No , int pos)
{}

// call by address(delete)

void DeleteFirst(PPNODE first)
{}

void DeleteLast(PPNODE last)
{}

void DeleteAtPos(PPNODE first , int pos)
{}

int main()
{
    PNODE head = NULL ;

    Display(head);
    Count(head);

    InsertFirst(&head , 11);
    InsertLast(&head ,21);
    InsertAtPos(&head , 31 , 3);

    DeleteFirst(&head);
    DeleteLast(&head);
    DeleteAtPos(&head , 3);
    
    return 0;
}

