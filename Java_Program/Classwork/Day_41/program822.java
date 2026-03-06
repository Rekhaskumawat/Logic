/*
    Description : program  to check the number is armstrong number or not 
                EX :- 153 (1^3 +5^3 + 3^3 == 153)

                step 1 : power by using while loop
*/

import java.util.Scanner;

class program822
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int X =0 , Y = 0 , iCnt = 0 , iPow = 0;

        System.out.println("Enter a Base: ");
        X = sobj.nextInt();

        System.out.println("Enter the power : ");
        Y = sobj.nextInt();

        // X = 5 , Y = 3
        iPow =1 ;
        while(Y != 0)
        {
            iPow = iPow*X;
            Y--;
        }

        System.out.println(iPow);

    }
}