/*
    Description : program  to check the number is armstrong number or not 
                EX :- 153 (1^3 +5^3 + 3^3 == 153)

                step 1 : merge of 823 , 822 
*/

import java.util.Scanner;

class program823
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0 , iCount = 0 , iDigit = 0 , iPow = 0 , iTemp = 0 ,iSum = 0 , iCountTemp =0 ;
        
        System.out.println("Enter a Number: ");
        iNo = sobj.nextInt();

        iTemp = iNo;

        // count Number of Digits
        while(iNo != 0)
        {
            iDigit = iNo % 10;                  // Y =iCount , X =iDigit
            iCount++;
            iNo = iNo / 10;
        }

        
        iNo = iTemp ;
        iCountTemp = iCount ;

        while (iNo != 0) 
        {
            iDigit = iNo % 10;
            iCount= iCountTemp;
            iPow =1 ;

            // count Power
            while(iCount!= 0)
            {
                iPow = iPow*iDigit;
                iCount--;
            }

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