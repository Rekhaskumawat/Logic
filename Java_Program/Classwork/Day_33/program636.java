/*  
        14th bit off

        1111    1111    1111    1111    1101    1111    1111    1111

        f         f       f       f       d       f       f       f

        0xffffdfff
*/

import java.util.Scanner;

class program636
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0, iMask = 0;
        
        System.out.println("Enter the number :-");
        iNo = sobj.nextInt();

        iMask = 0xffffdfff;

        iNo = iNo & iMask;

        System.out.println("Updated Number : "+iNo);
    }
}