/*
    Description : program  to check the number is strong number or not 
                EX :- 145 (1! +4! + 5! == 145)

                step 2 : factorial of digit
*/

import java.util.Scanner;

class program815
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iFact = 0 ;
        int iCnt = 0;

        System.out.println("Enter a Number: ");
        iNo = sobj.nextInt();

        iFact = 1;

        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            iFact = iFact*iCnt;
        }
        
        System.out.println("Factorial is : "+iFact);
    }
}