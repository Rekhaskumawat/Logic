#include<iostream>
using namespace std ;

class Arithmatic
{
    private:
        int iNo1 , iNo2 ;

    public:
        Arithmatic(int A , int B)
        {
            this->iNo1 = A;
            this->iNo2 = B;
        }

        int Addition()
        {
            return this->iNo1 + this->iNo2 ;
        }

        int Substraction()
        {
            return this->iNo1 - this->iNo2 ;
        }
};
int main()
{
    Arithmatic aobj(11,10);

    cout<<aobj.Addition()<<"\n";
    cout<<aobj.Substraction()<<"\n";

    return 0 ;
}