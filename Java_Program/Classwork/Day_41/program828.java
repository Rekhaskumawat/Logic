/*
    Description : program  to check the number is Harshed(Niven) number or not 
                EX :- 18  (1 + 8 = 9) so (18 % 9 == 0) number niven number

                
*/

import java.util.Scanner;

class program828
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0 , iCount = 0 , iDigit = 0 , iTemp = 0 ,iSum = 0 ;
        
        System.out.println("Enter a Number: ");
        iNo = sobj.nextInt();

        iTemp = iNo ;


        while (iNo != 0) 
        {
            iDigit = iNo % 10;
            iSum =iSum +iDigit ;
            iNo = iNo / 10;
            
        }

        if(iTemp % iSum == 0)
        {
            System.out.println(iTemp + " is a niven /Harshad Number");
        }
        else
        {
            System.out.println(iTemp + " is not a niven /Harshad Number");

        }

        sobj.close();
        
    }
}