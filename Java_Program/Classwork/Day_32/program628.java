
import java.util.Scanner;

class program6288
{
    public static void main(String A[])
    {
        
        int No = 0 , iMask = 0 , iResult = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number :-");
        No = sobj.nextInt();

        iMask = 0x00000080;

        iResult = No & iMask ;

        if(iResult == iMask)
        {
            System.out.println("8th bit is ON");
        }
        else
        {
            System.out.println("8th bit is OFF");
        }

       sobj.close();
    }
}