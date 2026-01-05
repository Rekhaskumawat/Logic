#include<iostream>
using namespace std;

int Addition(int no1 , int no2)
{
    int ans = 0;
    ans = no1 + no2;
    return ans;
}
int main()
{
    int i = 0 , j = 0 ;
    int ret = 0;

    cout<<"Enter first number :\n";
    cin>>i;

    cout<<"Enter Second number :\n";
    cin>>j;

    ret = Addition(i,j);
    cout<<"Addition is :"<<ret<<"\n";

    return 0 ;
}