/*
    Description : A tax portal calculates income tax based on annual income using progressive slabs. Only the amount in a slab is taxed at that slab’s rate.
                  
    Slabs:
            Up to ₹2,50,000 -> 0%
            ₹2,50,001 to ₹5,00,000 -> 5%
            ₹5,00,001 to ₹10,00,000 -> 20%
            Above ₹10,00,000 -> 30%

    Input:
        Annual income (integer)

    Validations:
        Income cannot be negative
    
    Expected Output:
        Annual Income: ₹<income>
        Total Tax Payable: ₹<tax>
    
    Author : Rekha Shankarlal Kumawat

    Date : 11 / 03 / 2026

*/

import java.util.Scanner;

class program75_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int income = 0 ;
        double tax = 0.0 ;
        
        System.out.println("Enter Your Income :- ");
        income = sobj.nextInt();
        

        if(income < 0)
        {
            System.out.println("Income Cannot Be negative ");
            return ;
        }

        if(income > 1000000)
        {
            tax += (income - 1000000) * 0.30;
            income = 1000000;
        }

        if(income > 500000)
        {
            tax += (income - 500000) * 0.20;
            income = 500000;
        }

        if(income > 250000)
        {
            tax += (income - 250000) * 0.05;
        }

        System.out.println("Annual Income: ₹" + income);
        System.out.println("Total Tax Payable: ₹" + (int)tax);

    }
}
