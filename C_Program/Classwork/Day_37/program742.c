#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data ;
    struct node * lchild;
    struct node * rchild;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Insert(PPNODE first , int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*first == NULL)          // if tree is empty
    {
        *first = newn;
    }
    else                        // if there is altleast one node
    {
        temp = *first;

        while (1)
        {
            if( No > temp->data)                // element is greater
            {
                if(temp->rchild == NULL)   
                {
                    temp->rchild = newn;
                    break;
                }     

                temp = temp->rchild;
            }

            else if(No < temp->data)           // element is smaller
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }

                temp = temp->lchild;
            }

            else if (No == temp->data)          // element is identical
            {
                printf("Unable to insert as elment is already in the linked list\n");
                free(newn);
                break;
            }
        }
        
    }
}// End of Insert function

// Left  Data(root)  Right

void Inorder(PNODE first)
{
    if(first != NULL)
    {
        Inorder(first->lchild);
        printf("%d\n", first->data);
        Inorder(first->rchild);
        
    }
}


int main()
{
    PNODE head = NULL;

    Insert(&head , 21);
    Insert(&head , 11);
    Insert(&head , 51);
    
    Inorder(head);
    
    return 0 ;
}