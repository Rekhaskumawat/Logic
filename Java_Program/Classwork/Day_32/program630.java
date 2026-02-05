
import java.util.Scanner;

class program630
{
    public static void main(String A[])
    {
        
        int No = 0 , iMask = 0 , iResult = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number :-");
        No = sobj.nextInt();

        iMask = 0x02000000;

        iResult = No & iMask ;

        if(iResult == iMask)
        {
            System.out.println("15th bit is ON");
        }
        else
        {
            System.out.println("15th bit is OFF");
        }

       sobj.close();
    }
}