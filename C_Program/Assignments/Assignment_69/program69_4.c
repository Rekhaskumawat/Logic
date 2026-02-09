////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : recursive program which display below pattern
//                A B C D E F
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 09 / 02 /2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    
    static char c = 'A';

    if(c <= ch)
    {
        printf("%c\t",c);
        c++;
        Display(ch);
    }
}
int main()
{
    char ch = '\0';
    printf("Enter a charcater :- ");
    scanf("%c",&ch);

    Display(ch);
    return 0 ;
}