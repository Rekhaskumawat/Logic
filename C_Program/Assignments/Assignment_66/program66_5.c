/////////////////////////////////////////////////////////////////////////////////////////
//
//  Description  :  program which accept onr number from user from user and 
//                  toggle contents of first and last nibble of the number . 
//                  return modified number
//
//  Authour      :  Rekha Shankarlal Kumawat
//
//  Date         :  10 / 02 / 2026
//
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

int ChkBit( int iNo )
{
    int imask1 = 0x00000001;
    int imask2 = 0x00000008;
    int imask =  0x00000000;

    int iResult = 0;

    imask = imask1 | imask2 ;
    
    iResult = iNo ^ imask1;

    return iResult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number :- ");
    scanf("%d",&iValue);

    iRet = ChkBit(iValue );

    printf("Updated number :- %d", iRet);
   
    return 0 ;

}