/*
    Description : program  to check the number is Neon number or not 
                EX :- 9 (9^2 = 81  , (8+1 == 9)) then  its neon number

                
*/

import java.util.Scanner;

class program831
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0 , iCount = 0 , iDigit = 0 , iTemp = 0  , iSum = 0 ;
        
        System.out.println("Enter a Number: ");
        iNo = sobj.nextInt();

        iTemp = iNo ;

        iNo = iNo * iNo;

        while (iNo != 0) 
        {
            iDigit = iNo % 10;
            iSum = iSum+iDigit ;
            iNo = iNo / 10;
            
        }

        if(iTemp == iSum)
        {
            System.out.println(iTemp + " is a Neon Number");
        }
        else
        {
            System.out.println(iTemp + " is not a Neon Number");

        }

        sobj.close();
        
    }
}