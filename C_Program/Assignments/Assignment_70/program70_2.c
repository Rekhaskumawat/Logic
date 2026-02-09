////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : recursive which accept number from user & return summation of digits 
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 09 / 02 /2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Sum(int ivalue)
{
    static int isum = 0;
    int iDigit = 0;

    if(ivalue != 0)
    {
        iDigit =  ivalue % 10;
        ivalue = ivalue / 10 ;
        isum = isum + iDigit;

        Sum(ivalue);
    }
    return isum;
}
int main()
{
    int ino = 0;
    int iRet = 0;

    printf("Enter a number :- ");
    scanf("%d",&ino);

    iRet = Sum(ino);

    printf("Summation of number is :- %d", iRet);

    return 0 ;
}