///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Replace
//  Description    : replace all occurrences of a value
//  Input          : Array , Size of Array
//  Output         : Nothing
//  Author         : Rekha Shankarlal Kumawat
//  Date           : 15/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void Replace(T*Arr, int iSize , T oldVal , T newVal)
{
    int iCnt = 0 ;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(oldVal == Arr[iCnt])
        {
            Arr[iCnt] = newVal;
        }
        
    }
    cout<<"New Array:-\n";
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<" ";
    }
    cout<<"\n";
    

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0 ;
    int iCnt = 0;
    int oldVal = 0;
    int newVal = 0;

    cout<<"Enter the lenght of the array:-\n";
    cin>>iLength;
    cout<<"Enter the old number to be replaced:-\n";
    cin>>oldVal;
    cout<<"Enter the number with to replace:-\n";
    cin>>newVal;
    int*Brr = NULL ;
    Brr = new int[iLength];

    cout<<"Enter the Elements:-\n";

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cin>>Brr[iCnt];
    }

    Replace(Brr,iLength ,oldVal , newVal);
    

    delete Brr;

    return 0 ;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Input1: 11 12 11 32 12   Input2 : 11  Input3: 2         Output: 2 12 2 32 12
//      Input1: 10 20 30 40 50   Input2 : 20  Input3 :3         Output: 10 3 30 40 50 
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
