/*
    Description : program  to check the number is armstrong number or not 
                EX :- 153 (1^3 +5^3 + 3^3 == 153)

                step 1 : Counting digit
*/

import java.util.Scanner;

class program820
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0 , iCount = 0 , iDigit = 0;
    

        System.out.println("Enter a Number: ");
        iNo = sobj.nextInt();

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iCount++;
            iNo = iNo / 10;
        }
       System.out.println(iCount);
    }
}