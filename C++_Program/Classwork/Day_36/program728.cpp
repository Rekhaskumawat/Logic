
#include<iostream>
#include<stdio.h>

using namespace std;

void RevDisplay(char*str)
{
    if(*str != '\0')
    {
        str++;
        RevDisplay(str);
        cout<<*str<<"\t";
    }
}
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter the string :- ");
    scanf("%[^'\n]s",Arr);

    RevDisplay(Arr);
    
    return 0 ;

}