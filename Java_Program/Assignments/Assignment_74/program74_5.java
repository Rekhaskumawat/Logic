/*
    Descritption : An e-commerce platform wants to compute the final payable amount at checkout.
                Discounts are based on purchase amount, and premium members receive an extra discount after the main discount.
    
    Discount Rules
                Amount > 5000 → 20% discount
                Amount > 2000 → 10% discount
                Otherwise → no discount
                Premium members → extra 5% discount on the discounted amount
    
    Input:
            Purchase amount (integer)
            Membership type: Premium / Regular
            Validations
            Amount must be > 0
            Membership must be valid

    Expected Output:

            Original Amount: ₹<amount>
            Total Discount: ₹<discount>
            Final Payable Amount: ₹<finalAmount>

    Author : Rekha Shankarlal Kumawat

    Date : 11 / 03 / 2026

*/

import java.util.Scanner;

class program74_5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Amount = 0;

        float DiscountAmount = 0.0f;
        float FinalAmoumnt = 0.0f;

        String MembershipType = null;

        System.out.println("Enter purchase amount : ");
        Amount = sobj.nextInt();

        System.out.println("Enter type of membership : (Premium/Regular)");
        MembershipType = sobj.next();

        if
        (
            (Amount < 0) || 
            ((MembershipType.equalsIgnoreCase("Premium") == false) &&
            (MembershipType.equalsIgnoreCase("Regular") == false))
        )
        {
            System.out.println("Invalid Input");
            return;
        }

        if(Amount > 5000)   // 20%
        {
            DiscountAmount = Amount * 0.2f;
        }
        else if(Amount > 2000)   // 10%
        {
            DiscountAmount = Amount * 0.1f;
        }
        else                    // 0%
        {
            DiscountAmount = 0.0f;
        }

        FinalAmoumnt = Amount - DiscountAmount;

        if(MembershipType.equalsIgnoreCase("Premium"))
        {
            DiscountAmount = DiscountAmount + (FinalAmoumnt * 0.05f);
            FinalAmoumnt = Amount - DiscountAmount;
        }

        System.out.println("Original Amount: ₹"+Amount);
        System.out.println("Total Discount: ₹"+DiscountAmount);
        System.out.println("Final Payable Amount: ₹"+FinalAmoumnt);
    }   
}
