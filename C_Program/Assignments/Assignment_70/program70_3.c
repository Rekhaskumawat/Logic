////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : recursive which accept string from user and count number of character
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 09 / 02 /2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int StrlenX(char*str)
{
    static int i = 0;

    if(*str != '\0')
    {
        i++;
        str++;
        StrlenX(str);
    }
    return i;
}
int main()
{
    char arr[20] ={'\0'};
    int iRet = 0;

    printf("Enter a string :- ");
    scanf("%s",arr);

    iRet = StrlenX(arr);

    printf("Summation of number is :- %d", iRet);

    return 0 ;
}