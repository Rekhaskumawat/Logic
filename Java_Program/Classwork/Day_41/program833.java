/*
    Description : program  to check the number is Spy number or not 
                EX :- sum of digit = product of digit
                
*/

import java.util.Scanner;

class program833
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0 , iSum = 0 , iprod = 0 ,iDigit = 0 , iTemp = 0;
        
        System.out.println("Enter a Number: ");
        iNo = sobj.nextInt();

        iTemp = iNo ;

        iprod = 1 ;
        while(iNo != 0)
        {
            iDigit = iNo % 10 ;
            iSum = iSum + iDigit;
            iprod = iprod*iDigit;

            iNo = iNo /10 ;
        }

        if(iSum == iprod)
        {
            System.out.println(iTemp + " is a Spy number");
        }
        else
        {
            System.out.println(iTemp + " is not a Spy number");

        }
        sobj.close();
        
    }
}