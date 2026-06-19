#include<stdio.h>
int Addition(int a, int b)          //helper function
{
    int sum = 0;

    sum = a + b;           //business logic
    return sum;
}

int main()
{
    int i = 0 , j = 0 , ans = 0;

    printf("Enter First Number:");
    scanf("%d",&i);

    printf("Enter Second Number:");
    scanf("%d",&j);

    ans = Addition(i,j);

    printf("Addition is:%d",ans);

    return 0;
}