/////////////////////////////////////////////////////////////////////////////////////////
//
//  Description  :  program which accept onr number from user and position from user and 
//                  check wheather bit at that position is on or off. 
//                  if bit is on return true else return false
//
//  Authour      :  Rekha Shankarlal Kumawat
//
//  Date         :  10 / 02 / 2026
//
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkBit( int iNo , int ipos)
{
    int imask = 0x00000001;
    int iResult = 0;

    imask = imask << (ipos -1);

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
    int ipos = 0;
    bool bRet = false;

    printf("Enter a number :- ");
    scanf("%d",&iValue);

    printf("Enter position :- ");
    scanf("%d",&ipos);

    bRet = ChkBit(iValue , ipos);

    if(bRet ==  true)
    {
        printf("Entered position bit is ON");
    }
    else
    {
        printf("Entered position bit is OFF");
    }
    return 0 ;

}