/*
    Description :A telecom company bills calls based on duration slabs. The system needs to calculate final charge for a given duration.

    Rules:
        First 5 minutes free
        Next 10 minutes (6–15) → ₹1 per minute
        Beyond 15 → ₹2 per minute

    Input:
        Call duration in minutes (integer)

    Validations:
        Minutes must be ≥ 0

    Expected Output:
        Call Duration: <minutes> minutes
        Total Call Charge: ₹<amount>

    Author : Rekha Shankarlal Kumawat

    Date : 19 / 03 / 2026

*/
import java.util.Scanner;

class program78_4
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int minutes;
        int charge = 0;

        System.out.print("Enter call duration in minutes: ");
        minutes = sobj.nextInt();

        if(minutes < 0)
        {
            System.out.println("Invalid input");
            return;
        }

        if(minutes <= 5)
        {
            charge = 0;
        }
        else if(minutes <= 15)
        {
            charge = (minutes - 5) * 1;
        }
        else
        {
            charge = (10 * 1) + ((minutes - 15) * 2);
        }

        System.out.println("Call Duration: " + minutes + " minutes");
        System.out.println("Total Call Charge: ₹" + charge);
    }
}
