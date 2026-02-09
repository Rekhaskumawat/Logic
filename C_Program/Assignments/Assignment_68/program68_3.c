////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : recursive program which display below pattern
//                5 4 3 2 1
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 09 / 02 /2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int ivalue)
{
    

    if(ivalue >= 1)
    {
        printf("%d\t",ivalue);
        ivalue--;
        Display(ivalue);
    }
}
int main()
{
     int ino = 0;
    printf("Enter a number :- ");
    scanf("%d",&ino);

    Display(ino);
    return 0 ;
}