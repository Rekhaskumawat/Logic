/*
    Description : A bank ATM must follow strict safety rules to avoid fraud and ensure customers maintain a minimum balance.
                    A customer inserts the card, checks their balance, and requests a withdrawal.
                    The ATM must either approve the request and update the balance or reject it and show the correct reason.
                    
    Rules
        Withdrawal amount must be a multiple of ₹100
        Maximum withdrawal per transaction is ₹25,000
        After withdrawal, balance must remain at least ₹1,000
        Input

    Line 1: Current balance (integer)
    Line 2: Requested withdrawal amount (integer)

    Validations

        If balance < 0 or withdrawAmount ≤ 0 → invalid input
    
    Expected Output
        If successful:
            Transaction Successful
            Remaining Balance: ₹<newBalance>
        If failed:
            Transaction Failed: <Reason>

    Author : Rekha Shankarlal Kumawat

    Date : 11 / 03 / 2026

*/

import java.util.Scanner;

class program74_2
{
    
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter your current balance : ");
        int Current_Balance = sobj.nextInt();

        System.out.println("Please enter the amount that you want to withdraw : ");
        int Withdraw_Amount = sobj.nextInt();

        if(Current_Balance < 0 || Withdraw_Amount <=0 )
        {
            System.out.println("Invalid input");
            return;
        }

        if(Withdraw_Amount % 100 != 0)
        {
            System.out.println("Transaction Failed : Withdrawal amount must be a multiple of ₹100");
        }
        else if(Withdraw_Amount > 25000)
        {
            System.out.println("Transaction Failed : Maximum withdrawal per transaction is ₹25,000");
        }
        else if(Current_Balance - Withdraw_Amount < 1000)
        {
            System.out.println("Transaction Failed : After withdrawal, balance must remain at least ₹1,000");
        }
        else
        {
            System.out.println("Transaction Succesful");
            System.out.println("Remaining balance : "+(Current_Balance - Withdraw_Amount));
        }
    }
}
