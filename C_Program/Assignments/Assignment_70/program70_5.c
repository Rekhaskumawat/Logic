////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : recursive which accept number from user & return Multmation of digits 
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 09 / 02 /2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Multi(int ivalue)
{
    static int iMult = 1;
    int iDigit = 0;

    if(ivalue != 0)
    {
        iDigit =  ivalue % 10;
        ivalue = ivalue / 10 ;
        iMult = iMult * iDigit;

        Multi(ivalue);
    }
    return iMult;
}
int main()
{
    int ino = 0;
    int iRet = 0;

    printf("Enter a number :- ");
    scanf("%d",&ino);

    iRet = Multi(ino);

    printf("Multipication of number is :- %d", iRet);

    return 0 ;
}