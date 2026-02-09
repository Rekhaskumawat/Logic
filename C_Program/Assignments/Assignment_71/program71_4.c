////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : recursive which accept number from user & return Smallest digit 
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 09 / 02 /2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Min(int ivalue)
{
    static int iMin = 9;
    int iDigit = 0;

    if(ivalue != 0)
    {
        iDigit =  ivalue % 10;
        ivalue = ivalue / 10 ;
        
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }

        Min(ivalue);
    }
    return iMin;
}
int main()
{
    int ino = 0;
    int iRet = 0;

    printf("Enter a number :- ");
    scanf("%d",&ino);

    iRet = Min(ino);

    printf("Minimum number :- %d", iRet);

    return 0 ;
}