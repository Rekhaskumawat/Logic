/////////////////////////////////////////////////////////////////////////////////////////
//
//  Description  :  program which accept onr number from user and count number of ON bits.
//                  without using % and / operator
//
//  Authour      :  Rekha Shankarlal Kumawat
//
//  Date         :  11 / 02 / 2026
//
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

int ChkBit( int iNo )
{
    int iCount = 0;

    while(iNo != 0)
    {
        if((iNo & 1) == 1)   // Check last bit
        {
            iCount++;
        }
        iNo = iNo >> 1;      // Right shift number
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number :- ");
    scanf("%d",&iValue);

    iRet = ChkBit(iValue );

    printf("Number of ON bit :- %d", iRet);
   
    return 0 ;

}