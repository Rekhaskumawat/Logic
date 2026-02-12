
#include<iostream>
using namespace std;

bool ChkPerfect(int iNo)
{
    static int iCnt = 1;
    static int iSum = 0;

    if(iCnt <= (iNo/2) )
    {
        if((iNo % iCnt) == 0 )
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
        ChkPerfect(iNo);
    } 
    
    if(iSum == iNo);
    {
        return true;
    }
    else
    {
        return false ;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = 0;
    
    cout<< " Enter the number :- \n";
    cin >> iValue ;

    bRet = ChkPerfect(iValue);

    if(bRet == true)
    {
        cout<<"NUmber is perfect\n";
    }
    else
    {
        cout<<"Number is not perfect\n";
    }

    return 0 ;

}