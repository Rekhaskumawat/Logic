////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : recursive which accept string from user and count small letters
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 09 / 02 /2026
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Small(char*str)
{
    static int i = 0;

    if(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            i++;
        }
     
        str++;
        Small(str);
    }
    return i;
}
int main()
{
    char arr[20] ={'\0'};
    int iRet = 0;

    printf("Enter a string :- ");
    scanf("%[^'\n']s",arr);

    iRet = Small(arr);

    printf("Summation of number is :- %d", iRet);

    return 0 ;
}