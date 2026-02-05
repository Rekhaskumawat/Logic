
import java.util.Scanner;

class program627
{
    public static void main(String A[])
    {
        
        int No = 0 , iMask = 0 , iResult = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number :-");
        No = sobj.nextInt();

        iMask = 128;

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