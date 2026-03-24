/*
    Description : A ride-hailing app calculates fare based on:

    Distance travelled
        Whether it is peak hour
        
        Fare rules:
            Base fare = ₹50
            First 10 km -> ₹12/km
            After 10 km -> ₹15/km
            Peak hour -> +20% surcharge

    Author : Rekha Shankarlal Kumawat

    Date : 14 / 03 / 2026

*/

import java.util.Scanner;

class program76_1
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter distance (km): ");
        int distance = sobj.nextInt();

        System.out.print("Peak hour? (true/false): ");
        boolean peak = sobj.nextBoolean();

        if(distance < 0)
        {
            System.out.println("Invalid distance");
            return;
        }

        double fare = 50;

        if(distance <= 10)
        {
            fare += distance * 12;
        }
        else
        {
            fare += 10 * 12 + (distance - 10) * 15;
        }

        if(peak)
        {
            fare += fare * 0.20;
        }

        System.out.println("Total Fare: ₹" + fare);
    }
}