///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std ;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name  : ArrayX
//  Description : prototype of functions
//  Input       : Nothing
//  Output      : Nothing
//  Author      : Rekha Shankarlal Kumawat
//  Date        : 07/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
class ArrayX
{
    public:
        T * Arr;
        int iSize;

        ArrayX(int);
        ~ArrayX();
        void Accept();
        void Display();
        int SearchFirst(T);
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : ArrayX
//  Description    : used to intialize the members(Constructor)
//  Input          : frequency  to be counted
//  Output         : Nothing
//  Author         : Rekha Shankarlal Kumawat
//  Date           : 07/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
ArrayX<T> :: ArrayX(int no)
{
    iSize = no;
    Arr = new T[iSize];
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : ArrayX
//  Description    : used to Deallocate the members(Constructor)
//  Input          : Nothing
//  Output         : Nothing
//  Author         : Rekha Shankarlal Kumawat
//  Date           : 07/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
ArrayX<T> :: ~ArrayX()
{
    delete [] Arr;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Accept
//  Description    : Accept the elements of Array
//  Input          : Nothing
//  Output         : Nothing
//  Author         : Rekha Shankarlal Kumawat
//  Date           : 07/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void ArrayX<T> :: Accept()
{
    int iCnt = 0 ;
    cout<<"Enter the elements\n";

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cin>>Arr[iCnt];
    }

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : SearchFirst
//  Description    : Search first occurance of element
//  Input          : element to be searched
//  Output         : Nothing
//  Author         : Rekha Shankarlal Kumawat
//  Date           : 07/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int ArrayX<T> :: SearchFirst(T iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
/*-------------------------------------INTEGER----------------------------------------*/

    int iLength = 0;
    int iValue = 0;
    cout<<"Enter the length of Array for integer :-\n";
    cin>>iLength;
    cout<<"Enter number to be searched  :-\n";
    cin>>iValue;

    ArrayX<int>*ipobj = new ArrayX<int>(iLength);
    ipobj->Accept();
    cout<<"First Occurence of elemnet :- "<<ipobj->SearchFirst(iValue)<<"\n";;

/*----------------------------------------DOUBLE----------------------------------------*/

    int dLength = 0;
    double dValue = 0;
    cout<<"Enter the length of Array for double :-\n";
    cin>>dLength;
    cout<<"Enter number to be searched  :-\n";
    cin>>dValue;

    ArrayX<double>*dpobj = new ArrayX<double>(dLength);
    dpobj->Accept();
    cout<<"First Occurence of elemnet :- "<<dpobj->SearchFirst(dValue)<<"\n";;

/*--------------------------------------FLOAT--------------------------------------------*/

    int fLength = 0;
    float fValue = 0;
    cout<<"Enter the length of Array for float :-\n";
    cin>>fLength;
    cout<<"Enter number to be searched  :-\n";
    cin>>fValue;

    ArrayX<float>*fpobj = new ArrayX<float>(fLength);
    fpobj->Accept();
    cout<<"First Occurence of elemnet :- "<<fpobj->SearchFirst(fValue)<<"\n";;

/*-------------------------------------CHARRACTER------------------------------------------*/

    int cLength = 0;
    char cValue = 0;
    cout<<"Enter the length of Array for Char :-\n";
    cin>>cLength;
    cout<<"Enter number to be searched  :-\n";
    cin>>cValue;

    ArrayX<char>*cpobj = new ArrayX<char>(cLength);
    cpobj->Accept();
    cout<<"First Occurence of elemnet :- "<<cpobj->SearchFirst(cValue)<<"\n";;

/*---------------------------------------------------------------------------------------------*/
    delete cpobj;
    delete fpobj;
    delete dpobj;
    delete ipobj;

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Input1: 3         Input2: 11          Input3: 11 12 12                      Output: 0
//      Input1: 0         Input2: 0.0         Input3: 0                             Output: 0
//      Input1: 3         Input2: 6.2         Input3: 6.2  233.32  232.3            Output: 0
//      Input1: 5         Input2: M           Input3: M D A S R                     Output: 0
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////