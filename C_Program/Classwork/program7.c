#include<stdio.h>

int AdditionTwoNumbers(int iNo1, int iNo2)          //helper function
{
    int iSum = 0;

    iSum = iNo1 + iNo2;           //business logic
    return iSum;
}

int main()
{
    int iValue1 = 0 , ivalue2 = 0 , iRet = 0;

    printf("Enter First Number:");
    scanf("%d",&iValue1);

    printf("Enter Second Number:");
    scanf("%d",&ivalue2);

    iRet = AdditionTwoNumbers(iValue1,ivalue2);

    printf("Addition is:%d",iRet);

    return 0;
}