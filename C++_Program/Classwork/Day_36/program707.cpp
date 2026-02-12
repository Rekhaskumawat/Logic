// Input : 7891
// output : 4

#include<iostream>
using namespace std;

void DisplayDigits(int iNo)
{
    if(iNo != 0)
    {
        cout<<iNo<<"\n";
        DisplayDigits(iNo/10);
        cout<<iNo<<"\n";
    }
}
int main()
{
    int iValue = 0;
  
    cout<< " Enter the number :- \n";
    cin >> iValue ;

    DisplayDigits(iValue);
    
    return 0 ;

}