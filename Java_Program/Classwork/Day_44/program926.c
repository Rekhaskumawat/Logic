 #include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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


void Display(PNODE first)
{
    while (first != NULL)
    {
        printf("| %d | -> ", first->data);

        first = first->next;   
    }
    printf("NULL\n");
    
}

int LastNthNodeData(PNODE first , int Pos)
{
    PNODE t1 = NULL;
    PNODE t2 = NULL;
    int iCnt = 0 ;

    t1 = first;
    t2 = first;
    if(first == NULL)
    {
        printf("LinkedList is Empty\n");
        return -1;
    }
    
    for(iCnt = 1 ; iCnt <= Pos ; iCnt++)
    {
        if(t1 == NULL)
        {
            printf("Invalid Position\n"); 
            return -1 ;
        }
        t1 = t1->next;
    }

    while(t1 != NULL)
    {
        t1 = t1->next;
        t2 =t2->next;
    }
    return t2->data;
}
int main()
{
    PNODE head = NULL ;
    int ipos = 0;
    printf("Enter  the NTH position :- ");
    scanf("%d", &ipos);
    InsertLast(&head , 11);
    InsertLast(&head , 21);
    InsertLast(&head , 51);
    InsertLast(&head , 101);
    InsertLast(&head , 111);
    InsertLast(&head , 121);
    InsertLast(&head , 151);
    InsertLast(&head , 201);


    Display(head);
    printf("Data At NTH position is :- %d" , LastNthNodeData(head ,ipos));

    return 0 ;
}