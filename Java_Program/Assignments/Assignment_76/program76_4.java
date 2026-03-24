/*
    Description :A customer buys items one by one:
                    Stop when money is not enough
                    Count how many items are purchased
                    Show remaining balance

    Author : Rekha Shankarlal Kumawat

    Date : 14 / 03 / 2026

*/

import java.util.Scanner;

class program76_4
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int budget = 0;
        int n = 0;
        int price = 0;
        int i = 0;

        System.out.println("Enter the Budget :- ");
        budget = sobj.nextInt();

        System.out.println("Enter the count of purches :- ");
        n = sobj.nextInt();

        if(budget < 0 || n < 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        int count = 0;

        for(i = 0; i < n; i++)
        {

            System.out.println(("Enter the price of the product :- "));
            price = sobj.nextInt();

            if(price > budget)
            {
                break;
            }

            budget -= price;
            count++;
        }

        System.out.println("Items Purchased: " + count);
        System.out.println("Remaining Balance: ₹" + budget);
    }
}