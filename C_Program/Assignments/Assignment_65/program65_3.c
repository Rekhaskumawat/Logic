/////////////////////////////////////////////////////////////////////////////////////////
//
//  Description  :  program which accept onr number from user and toggle 7th bit of 
//                  that number if it is on . return the modified number
//
//  Authour      :  Rekha Shankarlal Kumawat
//
//  Date         :  10 / 02 / 2026
//
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

int ChkBit( int iNo)
{
    int imask1 = 0x00000040;

    int iResult = 0;

    iResult = iNo ^ imask1;

    return iResult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number :- ");
    scanf("%d",&iValue);

    iRet = ChkBit(iValue);

    printf("Updated number :- %d", iRet);
   
    return 0 ;

}