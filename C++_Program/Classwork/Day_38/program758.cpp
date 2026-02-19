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
        bool LinearSearch(int iNo);
        bool BiDirectionalSearch(int iNo);
        bool ChkSorted();
        bool BinarySearch(int iNo);
        
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

    //Sorted = ChkSorted();
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

bool ArrayX :: BinarySearch(int iNo)
{
    int iStart = 0 , iEnd = 0 , iMid = 0;
    bool bFlage = false;

    if(Sorted == false)
    {
        return BiDirectionalSearch(iNo) ;
    }

    iStart = 0;
    iEnd = iSize -1 ;
    
    while ((iStart <= iEnd))
    {
        
        iMid = iStart + ((iEnd - iStart)/2);

        if(Arr[iMid] == iNo)
        {
            bFlage = true;
            break;
        }
        else if (iNo < Arr[iMid])
        {
            iEnd = iMid -1;
            
        }
        else if(iNo > Arr[iMid])
        {
            iStart = iMid + 1;

        }
    }
    return bFlage ;
}

int main()
{
    int iValue = 0;

    cout<<"enter the number of elements\n";
    cin>>iValue;

    ArrayX aobj(iValue);
    aobj.Accept();
    aobj.Display();

    if(aobj.BinarySearch(25))
    {
        cout<<"Element is present\n";
    }
    else
    {
        cout<<"Element is not present\n";

    }
    
    return 0 ;
}