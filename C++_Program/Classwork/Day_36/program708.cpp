// Input : 12345
// output : 15

#include<iostream>
using namespace std;

int SumDigit(int iNo)
{
    static int iSum = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        SumDigit(iNo/10);
        iSum = iSum +iDigit;
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    
    cout<< " Enter the number :- \n";
    cin >> iValue ;

    iRet = SumDigit(iValue);
    cout<<"Summation :- "<<iRet<<"\n";

    return 0 ;

}