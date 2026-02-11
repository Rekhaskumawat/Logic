/////////////////////////////////////////////////////////////////////////////////////////
//
//  Description  :  program which accept onr number and range of position from user  
//                  and toggle  all bits from that range
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
    int imask = 0x00000000;
    int iCnt = 0 ;

    for(iCnt = ipos1 ; iCnt <= ipos2 ; iCnt++)
    {
        imask = imask | (imask1 << (iCnt - 1));
    }

    iNo1 = iNo1 ^ imask ;
    
    printf("Updated number :- %d\n", iNo1);

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