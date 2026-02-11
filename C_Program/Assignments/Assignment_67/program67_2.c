/////////////////////////////////////////////////////////////////////////////////////////
//
//  Description  :  program which accept onr number from user and Display position of 
//                  comman ON bit from that two numbers
//
//  Authour      :  Rekha Shankarlal Kumawat
//
//  Date         :  11 / 02 / 2026
//
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

void ChkBit( int iNo1 , int iNo2 )
{
    int iResult = 0;
    int iCount = 0;
    int ipos = 1;

    iResult = iNo1 & iNo2 ;

    while(iResult != 0)
    {
        if((iResult & 1) == 1)   
        {
            printf("Cooman ON bit at position :- %d\n", ipos);
        }
        iResult = iResult >> 1;
        ipos++;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter first number :- ");
    scanf("%d",&iValue1);

    printf("Enter second number :- ");
    scanf("%d",&iValue2);

    ChkBit(iValue1 , iValue2);
   
    return 0 ;

}