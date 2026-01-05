#include<iostream>
using namespace std ;

class ArrayX
{
    public:
        int * Arr;
        int iSize;

        ArrayX(int no)
        {
            cout<<"Inside constructor\n";
            iSize = no;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            cout<<"Inside Destructor\n";
            delete [] Arr;
        }

        void Accept()
        {
            int iCnt = 0 ;
            cout<<"Enter the elements\n";

            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                cin>>Arr[iCnt];
            }

        }
        void Display()
        {
            int iCnt = 0;

            cout<<"Elements of the Array are:\n";

            for(iCnt = 0; iCnt < iSize ; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";

        }
        int Addition()
        {
            int iSum = 0;
            int iCnt = 0;

            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }
            return iSum ;
        }
};

int main()
{
    int iValue = 0;

    cout<<"enter the number of elements\n";
    cin>>iValue;

    //step 1 : Allocate the memory
    ArrayX*aobj = new ArrayX(iValue);

    // step 2 : use the memory

    aobj->Accept();
    aobj->Display();
    
    cout<<"Summation of all Elements :"<<aobj->Addition()<<"\n";

    // step3: Deallocate memory
    delete aobj ;
    
    return 0 ;
}