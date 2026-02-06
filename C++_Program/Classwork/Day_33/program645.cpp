#include<iostream>
using namespace std ;

void Display()
{
    int i = 1;          // Auto storage class (for every stackframe new i is created) 
                        //by default it is auto storage class variable

    cout<<i<<"\n";
    i++;

    Display();
}

int main()
{
    Display();

    return 0 ;
}