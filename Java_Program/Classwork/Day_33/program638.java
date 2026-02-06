/*  
        Toggle Bit 

        iPos = 5

        iNo   =   0100   1101
                                    ^
        iMask =   0001   0000

        -------------------------------

        iNo   =   0101   1101

        -------------------------------

        iNo   =   0101   1101
                                    ^
        iMask =   0001   0000

        -------------------------------

        iNo   =   0100    1101
*/

import java.util.Scanner;

class program638
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0, iMask = 0x1 , iPos = 0;
        
        System.out.println("Enter the number :-");
        iNo = sobj.nextInt();

        System.out.println("Enter the Position:-");
        iPos = sobj.nextInt();

        iMask = iMask << (iPos -1);

        iNo = iNo ^ iMask;

        System.out.println("Updated Number : "+iNo);
    }
}