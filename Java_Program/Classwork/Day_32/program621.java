
import java.util.Scanner;

class program621
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int No = 0;
        int digit = 0;
        int iCount = 0;

        System.out.println("Enter a number:-");
        No = sobj.nextInt();
        
        while(No != 0)
        {
            digit = No % 2;
            iCount = iCount + digit ;
            No = No/2;
        }
        System.out.println("Number of 1's are :-" +iCount);

    }
}