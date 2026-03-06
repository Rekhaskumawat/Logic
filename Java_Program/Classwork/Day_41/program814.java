/*
    Description : program  to check the number is strong number or not 
                EX :- 145 (1! +4! + 5! == 145)

                Step 1 : getting digits
*/

import java.util.Scanner;

class program814
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iDigit = 0 ;

        System.out.println("Enter a Number: ");
        iNo = sobj.nextInt();

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            System.out.println(iDigit);
            iNo = iNo / 10;
            
        }
    }
}