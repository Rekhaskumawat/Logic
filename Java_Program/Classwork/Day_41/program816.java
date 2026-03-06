/*
    Description : program  to check the number is strong number or not 
                EX :- 145 (1! +4! + 5! == 145)

                step 3 : complete program
*/

import java.util.Scanner;

class program816
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0 ,iFact = 0 ,iCnt = 0 , iTemp = 0,iSum = 0 , iDigit = 0;

        System.out.println("Enter a Number: ");
        iNo = sobj.nextInt();

        iTemp = iNo;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            
            for(iCnt = 1 , iFact = 1; iCnt <= iDigit ; iCnt++)
            {
                iFact = iFact*iCnt;
            }
            
            iNo = iNo / 10;

            iSum = iSum+iFact;
        
        }

        if(iSum == iTemp)
        {
            System.out.println("Its a Strong Number");
        }
        else
        {
            System.out.println("Its not a Strong Number");

        }
       
    }
}