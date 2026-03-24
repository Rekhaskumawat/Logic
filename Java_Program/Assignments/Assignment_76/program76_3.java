/*
    Description : Charges based on parcel weight:
                    Up to 1 kg -> ₹50
                    1–5 kg -> ₹50 + ₹20 per extra kg
                    Above 5 kg -> ₹150 + ₹30 per extra kg

    Author : Rekha Shankarlal Kumawat

    Date : 14 / 03 / 2026

*/

import java.util.Scanner;

class program76_3
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int weight = 0;

        System.out.println("Enter the Weight :- ");
        weight = sobj.nextInt();

        if(weight <= 0)
        {
            System.out.println("Invalid weight");
            return;
        }

        int charge;

        if(weight <= 1)
        {
            charge = 50;
        }
        else if(weight <= 5)
        {
            charge = 50 + (weight - 1) * 20;
        }
        else
        {
            charge = 150 + (weight - 5) * 30;
        }

        System.out.println("Courier Charge: ₹" + charge);
    }
}