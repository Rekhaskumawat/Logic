#include<iostream>
using namespace std ;

void Display(int iNo)
{
    int iCnt = iNo;
    while(iCnt >= 1)
    {
        cout<<iCnt<<"\n";
        iCnt--;
    }   
}

int main()
{
    Display(6);

    return 0 ;
}