/////////////////////////////////////////////////////////////////////////////////////////
//
//  Description  :  program which checks whether first and last bit is ON or OFF
//                  first bit means number 1 and last bit means bit number 32
//
//  Authour      :  Rekha Shankarlal Kumawat
//
//  Date         :  10 / 02 / 2026
//
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkBit( int iNo)
{
    int imask1 = 0x00000001;
    int imask2 = 0x80000000;

    int imask = imask1 | imask2 ;

    int iResult = 0;

    iResult = iNo & imask;

    if(iResult == imask)
    {
        return true;
    }
    else
    {
        return false ;
    }

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number :- ");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);

    if(bRet ==  true)
    {
        printf("first and last bit is ON");
    }
    else
    {
        printf("first and last bit is OFF");
    }
    return 0 ;

}