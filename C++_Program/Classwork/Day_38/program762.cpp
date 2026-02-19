#include<iostream>
using namespace std ;

class ArrayX
{
    public:
        int * Arr;
        int iSize;
        bool Sorted;

        ArrayX(int no);
        ~ArrayX();

        void Accept();
        void Display();

        bool ChkSorted();
       
        void BubbleSort();
};

ArrayX :: ArrayX(int no)
{
    cout<<"Inside constructor\n";
    iSize = no;
    Arr = new int[iSize];
    Sorted = true ;
}

ArrayX :: ~ArrayX()
{
    cout<<"Inside Destructor\n";
    delete [] Arr;
}

void ArrayX :: Accept()                 
{
    int iCnt = 0 ;
    cout<<"Enter the elements\n";

    cin>>Arr[iCnt];

    for(iCnt = 1 ; iCnt < iSize ; iCnt++)
    {
        cin>>Arr[iCnt];

        if(Arr[iCnt-1] > Arr[iCnt])
        {
            Sorted = false ;
        }
    }

}

void ArrayX :: Display()
{
    int iCnt = 0;

    cout<<"Elements of the Array are:\n";

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";

}

bool ArrayX :: ChkSorted()
{
    int iCnt = 0;
    bool bFalge = true ;

    for(iCnt = 0 ; iCnt < iSize - 1 ; iCnt++)
    {
        if(Arr[iCnt] > Arr[iCnt+1])
        {
            bFalge = false;
            break;
        }
    }

    return bFalge;
}

// Input : 21  15  18  16  11

void ArrayX :: BubbleSort()
{
    int i = 0 , j = 0;

    int temp = 0 ;

    if(Sorted == true)                      // if data is already sorted (IMP filter)
    {
        return ;
    }

    for(i = 0 ; i < iSize -1 ; i++)             // Outer loop
    {
        for(j = 0 ; j < iSize - 1 - i; j++)      // Inner loop
        {
            if(Arr [j] > Arr[j+1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
            }
        }
    
        cout<<"\nData after Pass : "<< i+1 <<"\n";
        Display();
    }

    Sorted = true;
}

int main()
{
    int iValue = 0;

    cout<<"enter the number of elements\n";
    cin>>iValue;

    ArrayX aobj(iValue);
    aobj.Accept();

    cout<<"Data BEFORE sorting\n";
    aobj.Display();

    aobj.BubbleSort();
    
    cout<<"Data AFTER sorting\n";
    aobj.Display();

    return 0 ;
}