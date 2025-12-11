///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//required header file
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                              // for input output

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Display the pattern of character
//  Input :         Integer
//  output :        Void
//  Author :        Rekha Shankarlal Kumawat
//  Date :          21/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iRow , int iCol)
{
    int iCnt1 = 0 ;
    int iCnt2 = 0 ;
    int iCount = 0 ;
    for(iCnt1 = 1 ; iCnt1 <= iRow ; iCnt1++)
    {
        for(iCnt2 = 1 ; iCnt2 <= iCol ; iCnt2++)
        {
            iCount++;
            if(iCount >= 10)
            {
               iCount = 1 ; 
            }
            printf("%d\t", iCount);
            
        }

        printf("\n");
    }
}//end of the Display function

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Entery point function
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0 ;
    int iValue2 = 0 ;

    printf("Enter the number of rows:");
    scanf("%d", &iValue1);

    printf("Enter the number of columns:");
    scanf("%d", &iValue2);

    Display(iValue1 , iValue2);

    return 0 ;
}//end of main function

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:3    Input2:4   Output:1  2  3  4
//                                5  6  7  8
//                                9  1  2  3
//                                
//
//  Input1:4    Input2:5   Output:1  2  3  4  5 
//                                6  7  8  9  1
//                                2  3  4  5  6
//                                7  8  9  1  2
//

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
