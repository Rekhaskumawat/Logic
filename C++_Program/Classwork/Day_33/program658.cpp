/*
    Input : 4
    output : 1+2+3+4 =10
*/

#include<iostream>
using namespace std ;

int Addition(int iNo)
{
    static int iSum = 0;
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        iSum = iSum + iCnt;
        iCnt++;
        Addition(iNo);
    }   

    return iSum;
}

int main()
{
    int iRet = 0;
    
    iRet = Addition(4);

    cout<<"Addition is : "<<iRet<<"\n";

    return 0 ;
}