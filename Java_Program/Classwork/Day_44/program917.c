 #include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct  node
{
    int data ;
    struct node*next ;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


void InsertLast(PPNODE first , int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data= no ;
    newn->next =  NULL;

    if((*first) == NULL)
    {
        (*first) = newn;
    }
    else
    {
        temp = (*first);

        while ((temp->next) != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn; 
    }
}

// time complexity = n/2   changed  

int MiddleElement(PNODE first)
{
    PNODE fast = first;
    PNODE slow = first;

    while ((fast->next != NULL) && (fast != NULL))    
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow->data;
}

void Display(PNODE first)
{
    while (first != NULL)
    {
        printf("| %d | -> ", first->data);

        first = first->next;   
    }
    printf("NULL\n");
    
}


int main()
{
    PNODE head = NULL ;
    int iRet = 0;
    InsertLast(&head , 11);
    InsertLast(&head , 21);
    InsertLast(&head , 51);
    InsertLast(&head , 101);
    InsertLast(&head , 111);


    Display(head);
    iRet = MiddleElement(head);

    printf("Middle element is : %d\n" , iRet);
    
    return 0 ;
}