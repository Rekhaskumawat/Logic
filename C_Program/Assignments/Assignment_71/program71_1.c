////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : recursive which accept string from user and count whitespace
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 09 / 02 /2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int WhiteSpace(char*str)
{
    static int i = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            i++;
        }
     
        str++;
        WhiteSpace(str);
    }
    return i;
}
int main()
{
    char arr[20] ={'\0'};
    int iRet = 0;

    printf("Enter a string :- ");
    scanf("%[^'\n']s",arr);

    iRet = WhiteSpace(arr);

    printf("Summation of number is :- %d", iRet);

    return 0 ;
}