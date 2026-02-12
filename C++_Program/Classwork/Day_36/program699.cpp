// Input : 5
// output : 1 2 3 4 5

#include<iostream>
using namespace std;

void Display(int iNo)
{
    if(iNo >= 1)
    {
        cout<<iNo<<"\t";
        Display(iNo-1);             // caller do not change its own value
        cout<<iNo<<"\t";
    }
    
}
int main()
{
    int iValue = 0;
    
    cout<< " Enter the number :- \n";
    cin >> iValue ;

    Display(iValue);
    cout<<"\n";

    return 0 ;

}