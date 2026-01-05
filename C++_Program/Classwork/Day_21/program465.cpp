#include<iostream>
using namespace std;

class Arithmatic
{
    public:
        int no1;
        int no2;

        Arithmatic(int a , int b)
        {
            no1 =a;
            no2 =b;
        }

        int Addition()
        {
            int ans ;
            ans = no1 + no2;
            return ans;
        } 

        int Substraction()
        {
            int ans ;
            ans = no1 - no2;
            return ans;
        } 
};

int main()
{
    Arithmatic*obj =  new Arithmatic(11,10);
    cout<<"Addition is :"<<obj->Addition()<<"\n";
    cout<<"Substraction is :"<<obj->Substraction()<<"\n";

    delete obj;

    return 0 ;
}
