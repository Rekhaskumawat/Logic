/////////////////////////////////////////////////////////////////////////////////////////
//
//  Description  :  program which checks whether 15th bit is ON or OFF
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
    int imask = 0x00004000;
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
        printf("15th bit is ON");
    }
    else
    {
        printf("15th bit is OFF");
    }
    return 0 ;

}