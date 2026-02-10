/////////////////////////////////////////////////////////////////////////////////////////
//
//  Description  :  program which checks whether 5th and 18th  bit is ON or OFF
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
    int imask1 = 0x00000010;
    int imask2 = 0x00020000;

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
        printf("5th and 18th bit is ON");
    }
    else
    {
        printf("5th and 18th bit is OFF");
    }
    return 0 ;

}