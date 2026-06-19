/*   
    Alogrithm
    START
        Accept first number input as no1
        Accept Sceond number input as no2
        if the input is negative then convert it into positive
        perform addition of no1,no2
        display the addition on screen
        
    STOP
*/

///////////////////////////////////////////////////////////////////////////////
//
//  required Header files
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  AdditionTwoNumbers
//  Description:    It is used to perform addition
//  Input:          Float, Float
//  Output:         Float
//  Author:         Rekha Shankarlal Kumawat
//  Date:           09/10/2025
//
//////////////////////////////////////////////////////////////////////////////


float AdditionTwoNumbers(
                            float fNo1,                                        //First input
                            float fNo2                                         //Second input
                        )          
{                                                       
    float fSum = 0.0f;                                                         // To store the result
                                                                               //updator
    if(fNo1 < 0.0f)
    {
        fNo1= -fNo1;           
    }
                                                                               //updator
    if(fNo2 < 0.0f)
    {
        fNo2 = - fNo2;           
    }

    fSum = fNo1 + fNo2;                                                         //business logic

    return fSum;
}   //End of AdditionTwoNumbers

//////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f , fValue2 = 0.0f ;                                     // to accept user input
    float fRet = 0.0f;                                                          //To store the result

    printf("Enter First Number:");
    scanf("%f",&fValue1);

    printf("Enter Second Number:");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);                                //Method call

    printf("Addition is:%f",fRet);

    return 0;
}   // End of main

//////////////////////////////////////////////////////////////////////////////
//
//  Input1 : 10.5        Input2 : 3.2        Output : 13.7
//  Input1 : -10.5        Input2 : 3.2        Output : 13.7
//  Input1 : 10.5        Input2 : -3.2        Output : 13.7
//  Input1 : -10.5        Input2 : 3.2        Output : 13.7
//  Input1 : 10.5        Input2 : 0.0        Output : 10.5
//
//////////////////////////////////////////////////////////////////////////////
