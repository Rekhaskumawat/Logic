/*
    Description : program  to check the number is Disarium number or not 
                EX :- 135 (1^1 + 3^2 + 5^3 == 135) 
                
*/

import java.util.Scanner;

class program836
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0 , iTemp = 0 , iDigit = 0 , iCount = 0 , iSum = 0 ;
        
        System.out.println("Enter a Number: ");
        iNo = sobj.nextInt();

        iTemp = iNo;

        while (iNo != 0)
        {
            iCount++;
            iNo = iNo / 10;
        }

        iNo = iTemp ;

        while(iNo != 0) 
        {
            iDigit = iNo % 10 ;
            iSum = iSum + ((int)Math.pow(iDigit, iCount));
            iCount--;
            iNo = iNo /10 ;
        }

        if(iTemp == iSum)
        {
            System.out.println(iTemp + " is a Disarium Number");
        }
        else
        {
            System.out.println(iTemp + " is not  a Disarium Number");

        }
        
        sobj.close();
        
    }
}