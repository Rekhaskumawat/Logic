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

        bool LinearSearch(int iNo)
        {
            bool bFalge = false;
            int iCnt = 0;

            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                if(Arr[iCnt] == iNo)
                {
                    bFalge  = true;
                    break;
                }
            }
            return bFalge;
        }
};

int main()
{
    int iValue = 0;

    cout<<"enter the number of elements\n";
    cin>>iValue;

    ArrayX aobj(iValue);
    aobj.Accept();
    aobj.Display();

    if(aobj.LinearSearch(21))
    {
        cout<<"Element is present\n";
    }
    else
    {
        cout<<"there is no such element\n";
    }
    
    return 0 ;
}