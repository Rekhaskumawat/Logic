#include<iostream>
using namespace std ;

void Display()
{
    static int i = 1;     // now the variable is of static class so only once the variable is created 

    if(i <= 4)
    {
        cout<<i<<"\n";
        i++;   
        Display(); 
    }
    
}

int main()
{
    Display();

    return 0 ;
}