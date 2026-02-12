
#include<iostream>
#include<stdio.h>

using namespace std;

void StrDisplay(char*str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        str++;
        iCount++;
    }
    str--;
    while(iCount >= 0)
    {
        cout<<*str<<"\t";
        str--;
        iCount--;
    }
}
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter the string :- ");
    scanf("%[^'\n]s",Arr);

    StrDisplay(Arr);
    
    return 0 ;

}