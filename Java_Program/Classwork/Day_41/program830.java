/*
    Description : program  to check the number is Palindrom number or not 
                EX :- 121  if reversed then it is 121 and palindrom
                      153  if reversed then it is 351 and  not a palindrom

                
*/

import java.util.Scanner;

class program830
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0 , iCount = 0 , iDigit = 0 , iTemp = 0 ,irev = 0 ;
        
        System.out.println("Enter a Number: ");
        iNo = sobj.nextInt();

        iTemp = iNo ;


        while (iNo != 0) 
        {
            iDigit = iNo % 10;
            irev = irev*10 +iDigit ;
            iNo = iNo / 10;
            
        }

        if(iTemp == irev)
        {
            System.out.println(iTemp + " is a Palindrom Number");
        }
        else
        {
            System.out.println(iTemp + " is not a Palindrom Number");

        }

        sobj.close();
        
    }
}