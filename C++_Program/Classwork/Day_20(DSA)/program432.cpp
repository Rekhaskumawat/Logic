
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node*next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyLL
{
    private:                            //IMPORTANT
        PNODE first;
        int iCount;

    public:
        SinglyLL()
        {
            this->first = NULL;
            this->iCount = 0;
        }

        void InsertFirst(int no)                    // updated
        {
            PNODE newn = NULL;
            newn = new NODE;
            newn->data = no;
            newn->next = NULL;

            newn->next = this->first;
            this->first = newn ;

            this->iCount++;
        }
        void InsertLast(int no)
        {
            PNODE newn = NULL;
            newn = new NODE;
            newn->data = no;
            newn->next = NULL;

            PNODE temp = NULL;

            if(this->iCount == 0)                 //updated
            {
                this->first = newn;
            }
            else
            {
              temp = this->first ;
              
              while(temp->next != NULL)
              {
                temp = temp->next;
              }

              temp->next = newn;
            }

            this->iCount++;
        }

        void DeleteFirst()
        {
            PNODE temp = NULL;
            if(this->first == NULL)
            {
                return ;
            }
            else if(this->first->next == NULL)                    //else if(this->iCount ==1)
            {
                delete this->first ;
                this->first = NULL;
            }
            else
            {
                temp = this->first;
                this->first = this->first->next;
                delete temp;
            }
            this->iCount--;
        }
        void DeleteLast()
        {
            PNODE temp =NULL;
            if(this->first == NULL)
            {
                return ;
            }
            else if(this->first->next == NULL)                    //else if(this->iCount ==1)
            {
                delete this->first ;
                this->first = NULL;
            }
            else
            {
                temp = this->first;
                while ((temp->next->next != NULL))
                {
                    temp = temp->next;
                }
                
                delete temp->next;
                temp->next = NULL;
                
            }
            this->iCount--;
        }

        void Display()
        {
            PNODE temp = NULL;
            temp = this->first ;
            int iCnt = 0;
            for(iCnt = 1 ; iCnt <= this->iCount ; iCnt++)             //updated
            {
                cout<<"| "<<temp->data<<" |->";
                temp = temp->next;
            }
            cout<<"NULL\n";
        }
        int Count()
        {
            return this->iCount;
        }

        void InsertAtPos(int no , int pos)
        {
            PNODE temp =NULL;
            PNODE newn =NULL;
            
            if(pos < 1 || pos > (this->iCount+1))
            {
                cout<<"Invalid position\n";
                return ;
            }
            
            if(pos == 1)
            {
                this->InsertFirst(no);
            }
            else if(pos == (this->iCount+1))
            {
                this->InsertLast(no);
            }
            else
            {
                int iCnt = 0;
                newn = new NODE ;
                newn->data = no;
                newn->next = NULL;

                temp = this->first;
                for(iCnt = 1 ; iCnt < pos -1 ; iCnt++)
                {
                    temp = temp-> next;
                }

                newn->next = temp->next;
                temp->next = newn;
                this->iCount++;
            }
        }
        void DeleteAtPos(int pos)
        {
            PNODE temp =NULL;
            PNODE target =NULL;
            if(pos < 1 || pos > (this->iCount))
            {
                cout<<"Invalid position\n";
                return ;
            }
            
            if(pos == 1)
            {
                this->DeleteFirst();
            }
            else if(pos == (this->iCount))
            {
                this->DeleteLast();
            }
            else
            {
                int iCnt = 0;
                temp = this->first;
                for(iCnt = 1 ; iCnt < pos -1 ; iCnt++)
                {
                    temp = temp-> next;
                }
                target = temp ->next ;
                temp->next = target->next;
                delete target;

                this->iCount--;
            }
        }

};
int main()
{
    SinglyLL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(31);
    obj.Display();
    iRet = obj.Count();
    cout<<"numbers of nodes are : "<<iRet<<"\n";

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);
    obj.Display();
    iRet = obj.Count();
    cout<<"numbers of nodes are : "<<iRet<<"\n";

    obj.DeleteFirst();
    obj.Display();
    iRet = obj.Count();
    cout<<"numbers of nodes are : "<<iRet<<"\n";
    
    obj.DeleteLast();
    obj.Display();
    iRet = obj.Count();
    cout<<"numbers of nodes are : "<<iRet<<"\n";

    obj.InsertAtPos(105,3);
    obj.Display();
    iRet = obj.Count();
    cout<<"numbers of nodes are : "<<iRet<<"\n";

    obj.DeleteAtPos(3);
    obj.Display();
    iRet = obj.Count();
    cout<<"numbers of nodes are : "<<iRet<<"\n";



    return 0 ;

}