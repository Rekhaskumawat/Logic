
#include<iostream>
using namespace std;

void DisplayFactor(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1 ; iCnt <= (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt) == 0 )
        {
            cout<<iCnt<<"\t";
        }
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