/*
    Description :A hotel charges ₹3000 per day. For long stays, hotel provides discount.

            Rules:
                ₹3000 per day
                If stay > 7 days -> 5% discount on total bill
    Input:
        Number of days stayed

    Validations:
        Days must be >= 0

    Expected Output:
        Total Stay Duration: <days> days

    Author : Rekha Shankarlal Kumawat

    Date : 19 / 03 / 2026

*/
import java.util.Scanner;

class program78_1 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        int days = 0;

        System.out.print("Enter number of days: ");
        days = sobj.nextInt();

        if (days < 0) 
            {
            System.out.println("Invalid input");
            return;
        }

        int rate = 3000;
        double total = days * rate;

        if (days > 7) 
        {
            total = total * 0.95; // 5% discount
        }

        System.out.println("Total Stay Duration: " + days + " days");
        System.out.println("Final Bill Amount: ₹" + total);
    }
}
