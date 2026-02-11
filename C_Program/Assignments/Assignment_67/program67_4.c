/////////////////////////////////////////////////////////////////////////////////////////
//
//  Description  :  program which accept onr number and two position from user  
//                  and check wheather bit at first and at second position is ON or OFF
//
//  Authour      :  Rekha Shankarlal Kumawat
//
//  Date         :  11 / 02 / 2026
//
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void ChkBit( int iNo1 , int ipos1 , int ipos2 )
{
    int imask1 = 0x00000001;
    int imask2 = 0x00000001;
    int iresult = 0;

    imask1 = imask1 << (ipos1 -1);
    imask2 =  imask2 << (ipos2 -1);

    int imask = imask1 | imask2 ;

    iresult = iNo1 & imask ;

    if(iresult == imask)
    {
        printf(" bit are ON\n");
    }
    else
    {
        printf("bit are OFF\n");
    }


}

int main()
{
    int iValue1 = 0;
    int ipos1 = 0 ;
    int ipos2 = 0;

    printf("Enter first number :- ");
    scanf("%d",&iValue1);

    printf("Enter first postion :- ");
    scanf("%d", &ipos1);

    printf("Enter second postion :- ");
    scanf("%d",&ipos2);

    ChkBit(iValue1 , ipos1 , ipos2);
   
    return 0 ;

}