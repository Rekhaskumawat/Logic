////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : recursive which accept number from user & return reverse digit 
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 09 / 02 /2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Min(int ivalue)
{
    static int irev = 0;
    int iDigit = 0;

    if(ivalue != 0)
    {
        iDigit =  ivalue % 10;
        ivalue = ivalue / 10 ;
        
        irev = irev*10 + iDigit;
        Min(ivalue);
    }
    return irev;
}
int main()
{
    int ino = 0;
    int iRet = 0;

    printf("Enter a number :- ");
    scanf("%d",&ino);

    iRet = Min(ino);

    printf("reverse number :- %d", iRet);

    return 0 ;
}