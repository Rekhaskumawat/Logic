/*
    Description : program  to check the number is armstrong number or not 
                EX :- 153 (1^3 +5^3 + 3^3 == 153)

                use of inbuilt function from package (Math.pow(base , power))
*/

import java.util.Scanner;

class program827
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0 , iCount = 0 , iDigit = 0 , iPow = 0 , iTemp = 0 ,iSum = 0 ;
        
        System.out.println("Enter a Number: ");
        iNo = sobj.nextInt();

        iTemp = iNo ;

        // count Number of Digits
        iCount = Integer.toString(iNo).length();

        while (iNo != 0) 
        {
            iDigit = iNo % 10;
            // count Power
            iPow = (int)Math.pow(iDigit, iCount);

            iSum =iSum +iPow ;
            iNo = iNo / 10;
            
        }

        if(iSum == iTemp)
        {
            System.out.println(iTemp + " is a Armstrong Number");
        }
        else
        {
            System.out.println(iTemp + " is not a Armstrong Number");

        }

        sobj.close();
        
    }
}