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

void Display(int ivalue)
{
    static int i = 0;

    if(i <  ivalue)
    {
        printf("*\t");
        i++;
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