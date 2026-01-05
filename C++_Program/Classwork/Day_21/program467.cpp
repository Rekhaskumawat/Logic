#include<iostream>
using namespace std;

template <class T>
class Arithmatic
{
    public:
        T no1;
        T no2;

        Arithmatic(T a , T b)
        {
            no1 =a;
            no2 =b;
        }

        T Addition()
        {
            T ans ;
            ans = no1 + no2;
            return ans;
        } 

        T Substraction()
        {
            T ans ;
            ans = no1 - no2;
            return ans;
        } 
};

int main()
{
    Arithmatic <int> iobj(11,10);
    
    cout<<"Addition is :"<<iobj.Addition()<<"\n";
    cout<<"Substraction is :"<<iobj.Substraction()<<"\n";

    Arithmatic <double> dobj(11.23232 , 10.2321312);
    
    cout<<"Addition is :"<<dobj.Addition()<<"\n";
    cout<<"Substraction is :"<<dobj.Substraction()<<"\n";

    return 0 ;
}
