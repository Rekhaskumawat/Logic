///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Search
//  Description    : Check weather the numbers is preasent or not
//  Input          : Array , Size of Array
//  Output         : Boolean
//  Author         : Rekha Shankarlal Kumawat
//  Date           : 15/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
bool CheckSorted(T*Arr, int iSize , T Value)
{
    int iCnt = 0;
    bool flag = true;

    for(iCnt = 0 ; iCnt< iSize ; iCnt++)
    {
        if(Arr[iCnt] == Value)
        {
            flag = true ;
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
    int Search = 0;
    int iCnt = 0;
    bool Ret = false;

    cout<<"Enter the lenght of the array:-\n";
    cin>>iLength;
    cout<<"Enter the Search element from array :-\n";
    cin>>Search;

    int*Brr = NULL ;
    Brr = new int[iLength];

    cout<<"Enter the Elements:-\n";

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cin>>Brr[iCnt];
    }

    Ret = CheckSorted(Brr, iLength , Search);

    if(Ret == true)
    {
        cout<<"Number is present\n";
    }
    else
    {
        cout<<"Number is not present\n";        
    }

    delete Brr;

    return 0 ;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Input1: 11 12 11 32 12    input2 : 12        Output:Number is present
//      Input1: 10 20 30 40 50    input : 0          Output: Number is not present
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
