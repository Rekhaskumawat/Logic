
// Selection sort


#include<iostream>
using namespace std ;

#define INC_ORDER 1
#define DEC_ORDER 2
class ArrayX
{
    public:
        int * Arr;
        int iSize;
        bool Sorted;

        ArrayX(int no);
        ~ArrayX();

        void Accept();
        void Display();

        bool ChkSorted();
       
        void BubbleSort();
        void BubbleSortEfficient();
        void BubbleSortEfficientX(int iOption);

        void SelectionSort();


};

ArrayX :: ArrayX(int no)
{
    cout<<"Inside constructor\n";
    iSize = no;
    Arr = new int[iSize];
    Sorted = true ;
}

ArrayX :: ~ArrayX()
{
    cout<<"Inside Destructor\n";
    delete [] Arr;
}

void ArrayX :: Accept()                 
{
    int iCnt = 0 ;
    cout<<"Enter the elements\n";

    cin>>Arr[iCnt];

    for(iCnt = 1 ; iCnt < iSize ; iCnt++)
    {
        cin>>Arr[iCnt];

        if(Arr[iCnt-1] > Arr[iCnt])
        {
            Sorted = false ;
        }
    }

}

void ArrayX :: Display()
{
    int iCnt = 0;

    cout<<"Elements of the Array are:\n";

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";

}

bool ArrayX :: ChkSorted()
{
    int iCnt = 0;
    bool bFalge = true ;

    for(iCnt = 0 ; iCnt < iSize - 1 ; iCnt++)
    {
        if(Arr[iCnt] > Arr[iCnt+1])
        {
            bFalge = false;
            break;
        }
    }

    return bFalge;
}

// Input : 21  15  18  16  11

void ArrayX :: BubbleSort()
{
    int i = 0 , j = 0;

    int temp = 0 ;
    int Pass = 0;
    int Time  = 0;

    if(Sorted == true)                      // if data is already sorted (IMP filter)
    {
        return ;
    }

    Time = 1;
    for(i = 0 , Pass = 1; i < iSize -1 ; i++ ,Pass++)             // Outer loop
    {
        for(j = 0 ; j < iSize - 1 - i; j++ , Time++)      // Inner loop
        {
            if(Arr [j] > Arr[j+1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
            }
        }
    
        cout<<"\nData after Pass : "<< i+1 <<"\n";
        Display();
    }
    cout<<"Total Number of Iteration : "<<Time<<"\n";
    cout<<"\nNumber of Passes for Bubble Sort : "<<Pass<<"\n";
    Sorted = true;
}

void ArrayX :: BubbleSortEfficient()
{
    int i = 0 , j = 0;

    int temp = 0 ;

    bool bFlag = false ;

    /*if(Sorted == true)                    
    {
        return ;
    }
*/
    bFlag = true ;
    for(i = 0  ; (i < iSize -1) && (bFlag == true) ; i++)           
    {
        bFlag = false ;

        for(j = 0 ; j < iSize - 1 - i; j++ )     
        {
            if(Arr [j] > Arr[j+1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
                bFlag = true ;
            }
        }
    
        cout<<"\nData after Pass : "<< i+1 <<"\n";
        Display();
    }
    
    cout<<"\nNumber of Passes for Bubble Sort : "<<i<<"\n";
    Sorted = true;
}

// 1 : Increasing
// 2 : Decreasing
void ArrayX :: BubbleSortEfficientX(int iOption = INC_ORDER)
{
    int i = 0 , j = 0;
    int temp = 0 ;

    bool bFlag = false ;

    if(iOption < INC_ORDER || iOption > DEC_ORDER)
    {
        cout<<"Invalid option for sorting\n";
        cout<<"1: Increasing\n";
        cout<<"2 : Decreasing\n";
        return ;
    }

    /*if(Sorted == true)                    
    {
        return ;
    }
*/
    bFlag = true ;
    
    if(iOption == INC_ORDER)
    {
        for(i = 0  ; (i < iSize -1) && (bFlag == true) ; i++)           
        {
            bFlag = false ;

            for(j = 0 ; j < iSize - 1 - i; j++ )     
            {
                
                if(Arr [j] > Arr[j+1])
                {
                    temp = Arr[j];
                    Arr[j] = Arr[j+1];
                    Arr[j+1] = temp;
                    bFlag = true ;
                }
                
            }
            
        
            cout<<"\nData after Pass : "<< i+1 <<"\n";
            Display();
        }
    }// End of if(iOption == INC_ORDER)
    else if(iOption == DEC_ORDER)
    {
        for(i = 0  ; (i < iSize -1) && (bFlag == true) ; i++)           
        {
            bFlag = false ;

            for(j = 0 ; j < iSize - 1 - i; j++ )     
            {
                
                if(Arr [j] < Arr[j+1])
                {
                    temp = Arr[j];
                    Arr[j] = Arr[j+1];
                    Arr[j+1] = temp;
                    bFlag = true ;
                }
                
            }
            
            cout<<"\nData after Pass : "<< i+1 <<"\n";
            Display();
        }
    }// End of if(iOption == DEC_ORDER)
    
    cout<<"\nNumber of Passes for Bubble Sort : "<<i<<"\n";
    Sorted = true;
}

void ArrayX :: SelectionSort()
{
    int i = 0 , j = 0 ,temp = 0;
    int min_index = 0;

    for(i = 0 ; i < iSize -1 ; i++)
    {
        min_index = i ;

        for(j = i+1 ; j < iSize ; j++)
        {
            if(Arr[j] < Arr[min_index])
            {
                min_index  = j;
            }
        }

        if((i != min_index))
        {
            temp = Arr[i];
            Arr[i] = Arr[min_index];
            Arr[min_index] = temp;
        }
    }
}
int main()
{
    int iValue = 0;

    cout<<"enter the number of elements\n";
    cin>>iValue;

    ArrayX aobj(iValue);
    aobj.Accept();

    cout<<"Data BEFORE sorting\n";
    aobj.Display();

    /*// 1: Increasing 
    // 2: Decreasing
    aobj.BubbleSortEfficientX(DEC_ORDER);
    
    cout<<"Data AFTER sorting\n";
    aobj.Display();*/

    aobj.SelectionSort();
    
    cout<<"Data AFTER sorting\n";
    aobj.Display();

    return 0 ;
}