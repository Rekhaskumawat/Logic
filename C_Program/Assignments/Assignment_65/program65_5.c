/////////////////////////////////////////////////////////////////////////////////////////
//
//  Description  :  program which accept onr number from user and on its first 4 bit of 
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
    int imask1 = 0x00000001;
    int imask2 = 0x00000002;
    int imask3 = 0x00000004;
    int imask4 = 0x00000008; 

    int imask = imask1 | imask2 | imask3 | imask4;

    int iResult = 0;

    iResult = iNo | imask;

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