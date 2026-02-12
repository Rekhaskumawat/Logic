
#include<iostream>
using namespace std;

void DisplayFactor(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= (iNo/2) )
    {
        if((iNo % iCnt) == 0 )
        {
            cout<<iCnt<<"\t";
        }
        iCnt++;
        DisplayFactor(iNo);
    }
}

int main()
{
    int iValue = 0;
    
    cout<< " Enter the number :- \n";
    cin >> iValue ;

    DisplayFactor(iValue);

    return 0 ;

}