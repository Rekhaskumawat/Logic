
#include<iostream>
#include<stdio.h>

using namespace std;

void RevDisplay(char*str)
{
    if(*str != '\0')
    {
        cout<<str<<"\n";
        RevDisplay(str+1);
        cout<<str<<"\n";
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