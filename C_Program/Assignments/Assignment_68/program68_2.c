////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : recursive program which display below pattern
//                1 2 3 4 5
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 09 / 02 /2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int ivalue)
{
    static int i = 1;

    if(i <= ivalue)
    {
        printf("%d\t",i);
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