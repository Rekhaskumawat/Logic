#include<iostream>
using namespace std ;

class ArrayX
{
    public:
        int * Arr;
        int iSize;

        ArrayX(int no);
        ~ArrayX();
        void Accept();
        void Display();
        bool LinearSearch(int iNo);
        bool BiDirectionalSearch(int iNo);
        bool ChkSorted();
        
};

ArrayX :: ArrayX(int no)
{
    cout<<"Inside constructor\n";
    iSize = no;
    Arr = new int[iSize];
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

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cin>>Arr[iCnt];
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

bool ArrayX :: LinearSearch(int iNo)
{
    bool bFalge = false;
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFalge  = true;
            break;
        }
    }
    return bFalge;
}

bool ArrayX :: BiDirectionalSearch(int iNo)
{
    bool bFalge = false;
    int iStart = 0;
    int iEnd =0;

    for(iStart = 0 ,iEnd = iSize-1 ; iStart <= iEnd ; iStart++ , iEnd--)
    {
        if((Arr[iStart] == iNo) || (Arr[iEnd] == iNo))
        {
            bFalge  = true;
            break;
        }
    }
    return bFalge;
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

int main()
{
    int iValue = 0;

    cout<<"enter the number of elements\n";
    cin>>iValue;

    ArrayX aobj(iValue);
    aobj.Accept();
    aobj.Display();
/*
    if(aobj.LinearSearch(21))
    {
        cout<<"Element is present\n";
    }
    else
    {
        cout<<"there is no such element\n";
    }

    if(aobj.BiDirectionalSearch(21))
    {
        cout<<"Element is present\n";
    }
    else
    {
        cout<<"there is no such element\n";
    }*/

    if(aobj.ChkSorted())
    {
        cout<<"Data is sorted \n";
    }
    else
    {
        cout<<"Data is not Sorted\n";
    }
    
    return 0 ;
}