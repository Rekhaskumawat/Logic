
import java.util.Scanner;

class program633
{
    public static void main(String A[])
    {
        
        int No = 0 , iMask = 0x1 , iResult = 0 , iPos = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number :-");
        No = sobj.nextInt();

        System.out.println("Enter position :-");
        iPos = sobj.nextInt();

        iMask = iMask << (iPos-1) ;

        iResult = No & iMask ;

        if(iResult == iMask)
        {
            System.out.println(iPos+"th bit is ON");
        }
        else
        {
            System.out.println(iPos+"th bit is OFF");
        }

       sobj.close();
    }
}