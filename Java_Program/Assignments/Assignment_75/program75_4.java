/*
    Description : A traffic police app records whether a rider violated rules. Each violation has a fixed fine.
                    If multiple violations happen, fines should be added.
                
                    Fines:
                        No helmet -> ₹500
                        No license -> ₹1000
                        Overspeeding -> ₹1500
    Input:
                Helmet worn (Yes/No)
                License available (Yes/No)
                Overspeeding (Yes/No)
    Validations:
            Inputs must be Yes/No only

    Expected Output:
            Total Fine Amount: ₹<amount>

    Author : Rekha Shankarlal Kumawat

    Date : 11 / 03 / 2026

*/

import java.util.Scanner;

class program75_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        String Helmet  = null ;
        String License = null;
        String Overspeeding = null ;
        int Fine = 0 ;
    
        System.out.println("Helmet Worn (Yes/No) :- ");
        Helmet = sobj.next();
        
        System.out.println("License Available (Yes/No) :- ");
        License = sobj.next();

        System.out.println("Overspeeding (Yes/No) :- ");
        Overspeeding = sobj.next();

        if(!(License.equalsIgnoreCase("Yes") || License.equalsIgnoreCase("No"))||
            !(Helmet.equalsIgnoreCase("Yes") || Helmet.equalsIgnoreCase("No"))||
            !(Overspeeding.equalsIgnoreCase("Yes") || Overspeeding.equalsIgnoreCase("No"))
        )
        {
            System.out.println("Invalid Input: Please enter Yes or No only");
            return ;
        }

        if(Helmet.equalsIgnoreCase("No"))
        {
            Fine = Fine+500;
        }
        if(License.equalsIgnoreCase("No"))
        {
            Fine = Fine+1000;
        }
        if(License.equalsIgnoreCase("No"))
        {
            Fine = Fine+1500;
        }

        System.out.println("Toatl Fine Amount : "+Fine);
    }
}
