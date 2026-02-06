#include<iostream>
using namespace std ;

void Display(int iNo)
{
    
    while(iNo >= 1)
    {
        cout<<iNo<<"\n";
        iNo--;
    }   
}

int main()
{
    Display(6);

    return 0 ;
}