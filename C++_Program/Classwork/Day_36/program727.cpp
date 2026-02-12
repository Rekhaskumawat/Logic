
#include<iostream>
#include<stdio.h>

using namespace std;

void StrDisplay(char*str)
{
    if(*str != '\0')
    {
        cout<<*str<<"\t";
        str++;
        StrDisplay(str);  
        
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