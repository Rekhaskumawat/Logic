////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : recursive which accept number from user & return largest digit 
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 09 / 02 /2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Max(int ivalue)
{
    static int iMax = 0;
    int iDigit = 0;


    if(ivalue != 0)
    {
        iDigit =  ivalue % 10;
        ivalue = ivalue / 10 ;
        
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        Max(ivalue);
    }
    return iMax;
}
int main()
{
    int ino = 0;
    int iRet = 0;

    printf("Enter a number :- ");
    scanf("%d",&ino);

    iRet = Max(ino);

    printf("Maximum number :- %d", iRet);

    return 0 ;
}