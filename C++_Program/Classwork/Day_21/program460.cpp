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
    float i = 0.0f , j = 0.0f ;
    float ret = 0.0f;

    cout<<"Enter first number :\n";
    cin>>i;

    cout<<"Enter Second number :\n";
    cin>>j;

    ret = Addition(i,j);
    cout<<"Addition is :"<<ret<<"\n";

    return 0 ;
}