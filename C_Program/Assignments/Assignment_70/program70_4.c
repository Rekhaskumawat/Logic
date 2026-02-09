////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : recursive which accept number from user & return factorial of number
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 09 / 02 /2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Factorial(int ivalue)
{
    static int iFact = 1;

    if(ivalue != 0)
    {
        iFact = iFact * ivalue;
        ivalue--;
        Factorial(ivalue);
    }
    return iFact;
}
int main()
{
    int ino = 0;
    int iRet = 0;

    printf("Enter a number :- ");
    scanf("%d",&ino);

    iRet = Factorial(ino);

    printf("Factorial of number is :- %d", iRet);

    return 0 ;
}