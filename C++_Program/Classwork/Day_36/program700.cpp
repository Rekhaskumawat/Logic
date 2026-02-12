// Input : 7891
// output : 4

#include<iostream>
using namespace std;

int Count(int iNo)
{
    int iCount = 0;

    while(iNo != 0)
    {
        iNo = iNo / 10;
        iCount++;
    }
    return iCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    
    cout<< " Enter the number :- \n";
    cin >> iValue ;

    iRet = Count(iValue);
    cout<<iRet<<"\n";

    return 0 ;

}