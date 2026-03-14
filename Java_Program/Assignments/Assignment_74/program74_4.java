/*
    Descritption : An electricity company bills customers monthly based on how many units they consumed.
                    The billing is progressive, meaning units are charged in slabs.
    Slabs:
            First 100 units → ₹5 per unit
            Next 100 units (101–200) → ₹7 per unit
            Above 200 units → ₹10 per unit
    Input:
        One integer: units consumed
        Validations
        Units cannot be negative

    Expected Output:
        Total Units Consumed: <units>
        Total Electricity Bill: ₹<amount>

    Author : Rekha Shankarlal Kumawat

    Date : 11 / 03 / 2026

*/

import java.util.Scanner;

class program74_4
{
    
    
    
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Units = 0;
        int Amount = 0;

        System.out.println("Enter unit consumed : ");
        Units = sobj.nextInt();

        if(Units < 0)
        {
            System.out.println("Units cannot be negative");
            return;
        }

        if(Units <= 100)
        {
            Amount = Units * 5;
        }
        else if(Units <= 200)
        {
            Amount = 500 + ((Units - 100) * 7);
        }
        else
        {
           Amount = 500 + 700 + ((Units - 200) * 10); 
        }

        System.out.println("Total Units Consumed: "+Units);
        System.out.println("Total Electricity Bill: "+Amount);

        sobj.close();
    }
}
