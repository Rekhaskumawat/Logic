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

bool ChkLoop(PNODE first)
{
    PNODE fast =first;
    PNODE slow = first;
    bool bflage = false;

    while ((fast != NULL) && (fast->next!= NULL))
    {
        fast = fast->next->next;
        slow = slow->next;

        if(fast == slow)
        {
            bflage = true;
            break;
        }
    }
    
    return bflage;
}
int main()
{
    PNODE head = NULL ;
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;
    int Pos = 4 , i= 0;

    bool bRet = false;
    InsertLast(&head , 11);
    InsertLast(&head , 21);
    InsertLast(&head , 51);
    InsertLast(&head , 101);
    InsertLast(&head , 111);
    InsertLast(&head , 121);

    temp1 =head;
    temp2 =head ;
    //temp1 = temp1->next->next->next;
    //temp2 = temp2->next->next->next->next->next->next;

    for(i = 1 ; i <Pos ; i++)
    {
        temp1 = temp1->next;
    }

    while (temp2->next != NULL)
    {
        temp2 = temp2 ->next;
    }
    temp2->next = temp1;
  
    bRet = ChkLoop(head);
    if(bRet == true)
    {
        printf("Loop Exist\n");

    }
    else
    {
        printf("There is no loop\n");
    }
    return 0 ;
}