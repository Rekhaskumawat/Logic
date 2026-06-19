#include<stdio.h>

int main()
{
    int i = 0 , j = 0 , ans = 0;

    printf("Enter First Number:");
    scanf("%d",&i);

    printf("Enter Second Number:");
    scanf("%d",&j);

    ans = i + j;          //Business Logic

    printf("Addition is:%d",ans);

    return 0;
}