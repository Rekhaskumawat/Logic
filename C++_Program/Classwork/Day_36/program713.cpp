
#include<iostream>
using namespace std;

int SumFactors(int iNo)
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
        SumFactors(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    cout<< " Enter the number :- \n";
    cin >> iValue ;

    iRet = SumFactors(iValue);

    cout<<"Summation :- "<<iRet<<"\n";

    return 0 ;

}