
import java.util.Scanner;

class program619
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int No = 0;
        int digit = 0;

        System.out.println("Enter a number:-");
        No = sobj.nextInt();
        
        while(No != 0)
        {
            digit = No % 2;
            System.out.print(digit);
            No = No/2;
        }

    }
}