#include<iostream>
using namespace std;

template <class  T>

T Addition(T no1 , T no2)
{
    T ans = 0;
    ans = no1 + no2;
    return ans;
}

int main()
{

    cout<<"Addition of characters : "<<Addition('a','b')<<"\n";
    cout<<"Addition of integer : "<<Addition(11,10)<<"\n";
    cout<<"Addition of float : "<<Addition(10.2f,120.3f)<<"\n";
    cout<<"Addition of Double: "<<Addition(232.23232 , 1212.543232323)<<"\n";

    return 0 ;
}