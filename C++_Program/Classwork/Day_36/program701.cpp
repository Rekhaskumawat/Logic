// Input : 7891
// output : 4

#include<iostream>
using namespace std;

int Count(int iNo)
{
    static int iCount = 0;

    if(iNo != 0)
    {
        iNo = iNo / 10;
        iCount++;
        Count(iNo);
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