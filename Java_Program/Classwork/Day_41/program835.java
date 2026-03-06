/*
    Description : program  to check the number is Suuuny number or not 
                EX :- number + 1 is  perfect square number than its sunny number
                
*/

import java.util.Scanner;

class program835
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0 ;
        int Ans = 0;
        
        System.out.println("Enter a Number: ");
        iNo = sobj.nextInt();

        iNo++;

        Ans = (int)Math.sqrt(iNo);
        
        if(iNo == (Ans*Ans))
        {
            System.out.println((iNo-1) + " is a Sunny NUmber");
        }
        else
        {
            System.out.println((iNo-1) + " is not a  Sunny NUmber");

        }
        
        sobj.close();
        
    }
}