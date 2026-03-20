/*
    Description : A bank wants to quickly decide whether a customer is eligible for a personal loan.
                  The system checks the applicant’s details and either approves the loan or rejects with the exact reason.

                  Eligibility Conditions:
                    Age 21 to 60 inclusive
                    Monthly income >= ₹25,000
                    Credit score >= 700
                    Must NOT have an existing unpaid loan
    Input:
        Age
        Monthly income
        Credit score
        Existing unpaid loan (Yes/No)

    Validations:
        Age/income/score must be non-negative   
        Yes/No must be valid

    Expected Output:
        Loan Approved
            OR
        Loan Rejected: <Specific Reason>

    Author : Rekha Shankarlal Kumawat

    Date : 11 / 03 / 2026

*/

import java.util.Scanner;

class program75_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Age = 0;
        int MonthlyIncome = 0;
        int CreditScore = 0 ;
        String LoanUpdate = null;

        System.out.println("Enter Your Age :- ");
        Age = sobj.nextInt();
    
        System.out.println("Enter Your Monthly Income:- ");
        MonthlyIncome = sobj.nextInt();

        System.out.println("Enter Your Credit Score :- ");
        CreditScore = sobj.nextInt();

        System.out.println("Enter Exixting unpaid Loan (Yes/No):- ");
        LoanUpdate = sobj.next();

        if(Age < 21 || Age > 60)
        {
            System.out.println("Invalid Age for eligiblity for a personal loan");
            return ;
        }
        else if(MonthlyIncome < 25000)
        {
            System.out.println("Not eligible for the personal loan due to less montly income");
            return;
        }
        else if(CreditScore < 700)
        {
            System.out.println("Not Eligible for personal loan due to less creadit score");;
            return ;
        }
        else if(LoanUpdate.equalsIgnoreCase("Yes") == true)
        {
            System.out.println("No eligible for the personal loan as you have existing loan");
            return ;
        }
        else
        {
            System.out.println("You are Approved for the loan");
        }
    
    }
}
