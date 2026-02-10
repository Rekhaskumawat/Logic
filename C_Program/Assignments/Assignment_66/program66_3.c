/////////////////////////////////////////////////////////////////////////////////////////
//
//  Description  :  program which accept onr number from user and position from user and 
//                  ON that bit . return the modified number
//
//  Authour      :  Rekha Shankarlal Kumawat
//
//  Date         :  10 / 02 / 2026
//
/////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

int ChkBit( int iNo , int ipos)
{
    int imask1 = 0x00000001;

    int iResult = 0;

    imask1 = imask1 << (ipos -1);

    iResult = iNo | imask1;

    return iResult;
}

int main()
{
    int iValue = 0;
    int ipos = 0;
    int iRet = 0;

    printf("Enter a number :- ");
    scanf("%d",&iValue);

    printf("Enter position :- ");
    scanf("%d",&ipos);

    iRet = ChkBit(iValue , ipos);

    printf("Updated number :- %d", iRet);
   
    return 0 ;
}