/*
    Description : program  to check the number is Trimorphic number or not 
                EX :- 4^3 = 64  (last digit of ans is 4 so its Trimorphic)
                
*/

import java.util.Scanner;

class program837 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0 , iCount = 0 , iTemp = 0 , iCube = 0 , iDeno = 0;
        
        System.out.println("Enter a Number: ");
        iNo = sobj.nextInt();

        iTemp = iNo ;

        while (iNo != 0) 
        {
            iCount++ ;
            iNo = iNo / 10;
            
        }

        iNo = iTemp;
        iCube = iNo * iNo * iNo;

        iDeno = ((int)Math.pow(10, iCount));
        
        if((iCube % iDeno) == iTemp)
        {
            System.out.println(iTemp + " is a TriMorphic Number");
        }
        else
        {
            System.out.println(iTemp + " is not a TriMorphic Number");

        }

        sobj.close();
        
    }
}