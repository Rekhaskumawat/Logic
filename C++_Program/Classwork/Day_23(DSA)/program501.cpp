////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Final code of Queue using generic code
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

#pragma pack(1)

template <class T>
class Queuenode
{
    public:
        T data;
        Queuenode<T>*next;

        Queuenode(T no)
        {
            this->data = no;
            this->next = NULL;
        }
};

template <class T>
class Queue
{
    private:
        Queuenode<T> *first;
        Queuenode<T> *last;
        int iCount;

    public:
        Queue();
        void enqueue(T);                                                  
        T dequeue();                                                   
        void Display();
        int Count();

};

template <class T>
Queue<T> :: Queue()
{
    cout<<"Queue gets created succesfully...\n";
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

template <class T>
void Queue<T> :: enqueue(T no)
{
    Queuenode<T>*newn = NULL;
    newn = new Queuenode<T>(no);

    if(this->first == NULL && this->last ==NULL)
    {
        this->first = newn;
        this->last = newn;
    }
    else
    {
        this->last->next = newn;
        this->last = newn;
    }
    
    this->iCount++;
}  

template <class T>
T Queue<T> :: dequeue()
{
    T Value = 0;
    Queuenode<T>*temp = this->first;

    if(this->first == NULL && this->last == NULL)
    {
        cout<<"Queue is Empty\n";
        return -1;
    }
    Value = this->first->data;

    this->first = this->first->next;
    delete temp ;

    this->iCount--;

    return Value;
}

template <class T>
void Queue<T> ::  Display()
{
    Queuenode<T>*temp = NULL;
    temp = this->first;

    if(this->first == NULL && this->last == NULL)
    {
        cout<<"Queue is Empty.\n";
        return;
    }

    while (temp != NULL)
    {
        cout<<"| "<<temp->data<<" |-";
        temp = temp->next;
    }
    cout<<"\n";
}

template <class T>
int Queue<T> :: Count()
{
    return this->iCount;
}


int main()
{
    Queue<int>*qobj = new Queue<int>();

    int iChoice = 0;
    int value = 0;
    int iRet = 0;

    while(1)
    {
        cout<<"--------------------------------------------------------------------------\n";
        cout<<"-------------------please selsect the option-------------------------------\n";
        cout<<"1 : Insert new element inyo the queue\n";
        cout<<"2 : Remove the element from the queue\n";
        cout<<"3 : Display the element of the queue\n";
        cout<<"4 : Count the number of the elements from the queue\n";
        cout<<"0 : Exit the application\n";

        cin>>iChoice;
        cout<<"--------------------------------------------------------------------------\n";

        switch (iChoice)
        {
            case 1:
                cout<<"enter the element that you want to insert:-\n";
                cin>>value;
                qobj->enqueue(value);
                cout<<"element gets inserted sucessfully\n";
                break;
            case 2:
                iRet = qobj->dequeue();
                if(iRet != -1)
                {
                    cout<<"Element remove from queue is :"<<iRet<<"\n";
                }
                break;
            case 3:
                cout<<"Elements of the queue are:\n";
                qobj->Display();
                break;
            case 4:
                iRet = qobj->Count();
                cout<<"Number of elemnets in queue are:-"<<iRet<<"\n";
                break;
            case 0:
                cout<<"Thank you for using our application\n";
                delete qobj;
                return 0;
            default:
                cout<<"Please enter the valid option\n";
                break;
        }// end of switch

    }// end of while

    return 0 ;
}// end of main