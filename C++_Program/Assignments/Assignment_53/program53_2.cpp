///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : CheckSorted
//  Description    : Check weather the numbers are sorted or not
//  Input          : Array , Size of Array
//  Output         : Boolean
//  Author         : Rekha Shankarlal Kumawat
//  Date           : 15/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
bool CheckSorted(T*Arr, int iSize)
{
    int iCnt = 0;
    bool flag = true;
    T Temp;
    Temp = Arr[0];
    for(iCnt = 0 ; iCnt< iSize ; iCnt++)
    {
        if(Temp < Arr[iCnt])
        {
            flag = false ;
        }
    }

    if(flag == true)
    {
        return true;
    }
    else
    {
        return false ;
    }

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
    bool Ret = false;

    cout<<"Enter the lenght of the array:-\n";
    cin>>iLength;

    int*Brr = NULL ;
    Brr = new int[iLength];

    cout<<"Enter the Elements:-\n";

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cin>>Brr[iCnt];
    }

    Ret = CheckSorted(Brr, iLength);

    if(Ret == true)
    {
        cout<<"Array is sorted\n";
    }
    else
    {
        cout<<"Array is not sorted\n";        
    }

    delete Brr;

    return 0 ;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Input1: 11 12 11 32 12            Output: Array is not sorted
//      Input1: 10 20 30 40 50            Output: Array is sorted
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
