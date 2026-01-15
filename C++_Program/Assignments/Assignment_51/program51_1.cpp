///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std ;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name  : Pattern
//  Description : prototype of functions
//  Input       : Nothing
//  Output      : Nothing
//  Author      : Rekha Shankarlal Kumawat
//  Date        : 07/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
class Pattern
{
    public:
        T Value;
        int iCount;

        Pattern( T , int);
        void Display();
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Pattern
//  Description    : used to intialize the chartracterstics(Constructor)
//  Input          : Pattern to print , count to print
//  Output         : Nothing
//  Author         : Rekha Shankarlal Kumawat
//  Date           : 07/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
Pattern<T> :: Pattern( T Value , int iCount)
{
    this->Value = Value;
    this->iCount = iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Display
//  Description    : Display the Pattern
//  Input          : Nothing
//  Output         : Nothing
//  Author         : Rekha Shankarlal Kumawat
//  Date           : 07/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void Pattern<T> :: Display()
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iCount ; iCnt++)
    {
        cout<<Value<<"\t";
    }
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
/*-------------------------------------INTEGER----------------------------------------*/

    int iValue = 0;
    int iNum = 0;
    cout<<"Enter the integer to print :-\n";
    cin>>iValue;
    cout<<"Enter the count  :-\n";
    cin>>iNum;

    Pattern<int>*ipobj = new Pattern<int>(iValue , iNum);
    ipobj->Display();

/*----------------------------------------DOUBLE----------------------------------------*/

    double dValue = 0.0;
    int dNum = 0;
    cout<<"Enter the double to print:-\n";
    cin>>dValue;
    cout<<"Enter the count  :-\n";
    cin>>dNum;

    Pattern<double>*dpobj = new Pattern<double>(dValue , dNum);
    dpobj->Display();

/*--------------------------------------FLOAT--------------------------------------------*/

    float fValue = 0.0f;
    int fNum = 0;
    cout<<"Enter the float to print :-\n";
    cin>>fValue;
    cout<<"Enter the count :-\n";
    cin>>fNum;

    Pattern<float>*fpobj = new Pattern<float>(fValue , fNum);
    fpobj->Display();

/*-------------------------------------CHARRACTER------------------------------------------*/

    char cValue = '\0';
    int cNum = 0;
    cout<<"Enter the Character to print :-\n";
    cin>>cValue;
    cout<<"Enter the Count :-\n";
    cin>>cNum;

    Pattern<char>*cpobj = new Pattern<char>(cValue , cNum);
    cpobj->Display();

/*---------------------------------------------------------------------------------------------*/
    delete cpobj;
    delete fpobj;
    delete dpobj;
    delete ipobj;

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Input1: 11          Input2: 3             Output: 11 11 11
//      Input1: 3.73434     Input2: 2             Output: 3.73434   3.73434
//      Input1: 4.2         Input2: 6             Output: 4.2  4.2  4.2  4.2  4.2  4.2
//      Input1: M           Input2: 7             Output: M  M  M  M  M  M  M
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
