/*
    Step 1 : understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4:  Write the program
    Step 5: Test the program

*/
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
#include<stdio.h>

float AdditionTwoNumbers(float fNo1, float fNo2)          //helper function
{
    float fSum = 0.0f;

    //updator
    if(fNo1 < 0.0f)
    {
        fNo1= -fNo1;           
    }
    
    if(fNo2 < 0.0f)
    {
        fNo2 = - fNo2;           
    }

    fSum = fNo1 + fNo2;         //business logic

    return fSum;
}

int main()
{
    float fValue1 = 0.0f , fValue2 = 0.0f , fRet = 0.0f;

    printf("Enter First Number:");
    scanf("%f",&fValue1);

    printf("Enter Second Number:");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);

    printf("Addition is:%f",fRet);

    return 0;
}