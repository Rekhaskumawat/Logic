/*
    Description : A phone OS shows different battery warnings. The user wants a program that prints the correct battery status.

    Rules:
        Battery ≤ 5% → Critical
        Battery ≤ 15% → Low
        Otherwise → Normal

    Input:
        Battery percentage (integer)
    
    Validations:
        Input should be between 0 to 100

    Expected Output:

    Battery Percentage: <value>
    Status: <Critical/Low/Normal>

    Author : Rekha Shankarlal Kumawat

    Date : 11 / 03 / 2026

*/

import java.util.Scanner;

class program76_5
{
    public static void main(String[] A)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Battery Percentage: ");
        int battery = sobj.nextInt();

        if(battery < 0 || battery > 100)
        {
            System.out.println("Invalid Input! Enter value between 0 and 100.");
            return;
        }

        System.out.println("Battery Percentage: " + battery);

        if(battery <= 5)
        {
            System.out.println("Status: Critical");
        }
        else if(battery <= 15)
        {
            System.out.println("Status: Low");
        }
        else
        {
            System.out.println("Status: Normal");
        }
    }
}
    
