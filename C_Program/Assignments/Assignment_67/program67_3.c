/////////////////////////////////////////////////////////////////////////////////////////
//
//  Description  :  program which accept onr number from user and check weather 9th and 12th
//                  are ON or OFF
//
//  Authour      :  Rekha Shankarlal Kumawat
//
//  Date         :  11 / 02 / 2026
//
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

void ChkBit( int iNo1 )
{
    int imask1 = 0x00000100;
    int imask2 = 0x00000800;
    int iresult = 0;

    int imask = imask1 | imask2 ;

    iresult = iNo1 & imask ;

    if(iresult == imask)
    {
        printf("9th and 12th bit are ON\n");
    }
    else
    {
        printf("9th and 12th bit are OFF\n");
    }


}

int main()
{
    int iValue1 = 0;

    printf("Enter first number :- ");
    scanf("%d",&iValue1);

    ChkBit(iValue1);
   
    return 0 ;

}