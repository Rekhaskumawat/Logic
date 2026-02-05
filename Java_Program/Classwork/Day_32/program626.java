
import java.util.Scanner;

class program626
{
    public static void main(String A[])
    {
        
        int No = 0 , iMask = 0 , iResult = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number :-");
        No = sobj.nextInt();

        iMask = 4;

        iResult = No & iMask ;

        if(iResult == 0)
        {
            System.out.println("3rd bit is OFF");
        }
        else
        {
            System.out.println("3rd bit is ON");
        }

       sobj.close();
    }
}