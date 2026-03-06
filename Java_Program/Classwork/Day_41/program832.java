/*
    Description : program  to check the number is Automorphic number or not 
                EX :- 25 -> 25^2 = 625  (lat digit of ans is 25 so its Automorphic)
                
*/

import java.util.Scanner;

class program832    
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0 , iCount = 0 , iTemp = 0 , iSqr = 0 , iDeno = 0;
        
        System.out.println("Enter a Number: ");
        iNo = sobj.nextInt();

        iTemp = iNo ;

        while (iNo != 0) 
        {
            iCount++ ;
            iNo = iNo / 10;
            
        }

        iNo = iTemp;
        iSqr = iNo * iNo;

        iDeno = ((int)Math.pow(10, iCount));
        
        if((iSqr % iDeno) == iTemp)
        {
            System.out.println(iTemp + " is a AutoMorphic Number");
        }
        else
        {
            System.out.println(iTemp + " is not a AutoMorphic Number");

        }

        sobj.close();
        
    }
}