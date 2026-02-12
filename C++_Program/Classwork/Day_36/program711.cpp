
#include<iostream>
using namespace std;

void DisplayFactor(int iNo)
{
    int iCnt = 0;
    iCnt = 1 ; 
    while(iCnt <= (iNo/2) )
    {
        if((iNo % iCnt) == 0 )
        {
            cout<<iCnt<<"\t";
        }
        iCnt++;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    cout<< " Enter the number :- \n";
    cin >> iValue ;

    DisplayFactor(iValue);

    return 0 ;

}