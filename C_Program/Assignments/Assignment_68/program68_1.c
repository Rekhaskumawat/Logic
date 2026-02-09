////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : recursive program which display below pattern
//                 * * * * *
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 09 / 02 /2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    static int i = 0;

    if(i != 5)
    {
        printf("*\t");
        i++;
        Display();
    }
}
int main()
{
    Display();
    return 0 ;
}