/*
    Description : Slabs + fixed meter charge. If paid after due date, add 2% penalty per week late (max 10%).

                    Input: units, weeksLate
                    Output: billAmount

    Author : Rekha Shankarlal Kumawat

    Date : 19 / 03 / 2026

*/
import java.util.Scanner;

class program77_4
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int units = 0;
        int weeksLate = 0;

        double bill = 0;

        System.out.println("Enter the units :- ");
        units = sobj.nextInt();

        System.out.println("Enter the delay weeks :- ");
        weeksLate = sobj.nextInt();

        if (units <= 50) 
        {
            bill = units * 2;
        }
        else if (units <= 100)
        {
            bill = 50 * 2 + (units - 50) * 3;
        }
        else 
        {
            bill = 50 * 2 + 50 * 3 + (units - 100) * 5;
        }
        bill += 100; // fixed charge

        double penalty = Math.min(weeksLate * 0.02, 0.10);
        bill += bill * penalty;

        System.out.println("Total Bill: " + bill);
    }
}