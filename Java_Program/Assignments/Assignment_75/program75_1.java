/*
    Description : A Shopping mall parking gate records entry and exit duration in hours
                    the parking system calculates charges based on the total hours a vehicalstayed
                    Long-durationparking attracts additional penalty

    Rules :
                first 2 hours -> 20 rs.
                after 2 ours -> 10 rs. per extra hours
                if total hours > 10 -> add 50 rs. penalty
    
    Input
        total parking hours

    validations :
            hours cannot be negative
    
    Expected Output
        total parking duration : <hours>
        total parking fee : <amount>

    Author : Rekha Shankarlal Kumawat

    Date : 11 / 03 / 2026

*/

import java.util.Scanner;

class program75_1 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int TotalTime = 0;
        int Fine = 0;

        System.out.println("Enter the number of Hours : ");
        TotalTime = sobj.nextInt();

        if(TotalTime< 0)
        {
            System.out.println("Houres Cannot be negative");
            return;
        }

        if(TotalTime >= 1 && TotalTime <= 2)
        {
            Fine = Fine + 20;
        }
        else if(TotalTime > 2 && TotalTime <= 10)
        {
            Fine = (TotalTime) * 10 ;
        }
        else if(TotalTime > 10)
        {
            
            Fine = (TotalTime * 10) + 50 ;
        }

        System.out.println("Toatal Parking Duration :" + TotalTime);
        System.out.println("Total Parking Fee : " + Fine);
    }
}
