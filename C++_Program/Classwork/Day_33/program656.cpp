#include<iostream>
using namespace std ;

void Display(int iNo)
{
    
    if(iNo >= 1)
    {
        cout<<iNo<<"\n";
        iNo--;
        Display(iNo);
    }   
}

int main()
{
    Display(6);

    return 0 ;
}