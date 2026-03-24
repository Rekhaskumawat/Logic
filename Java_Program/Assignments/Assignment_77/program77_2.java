/*
    Description :  Fare depends on:

                Distance
                Class (Sleeper / 3AC / 2AC)
                Tatkal booking (< 24 hrs -> +30%)
                Senior citizen (age >= 60 -> −40%)

    Author : Rekha Shankarlal Kumawat

    Date : 19 / 03 / 2026

*/
import java.util.Scanner;

class program77_2
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        int distance = 0;
        String classType = null;
        int bookingHoursBefore = 0;
        int age = 0;

        System.out.println(("Enter the Distance :- "));
        distance = sobj.nextInt();

        System.out.println(("Enter the Class Type (Sleeper / 3AC / 2AC) :- "));
        classType = sobj.next();

        System.out.println(("Enter the  bookinf hour before:- "));
        bookingHoursBefore = sobj.nextInt();

        System.out.println(("Enter the age :- "));
        age = sobj.nextInt();

        double baseFare = distance * 1; // ₹1/km

        double multiplier = 1;
        if (classType.equalsIgnoreCase("Sleeper")) 
        {
            multiplier = 1;
        }
         else if (classType.equalsIgnoreCase("3AC")) 
        {
            multiplier = 2;
        } 
        else if (classType.equalsIgnoreCase("2AC")) 
        {
            multiplier = 3;
        }

        double fare = baseFare * multiplier;

        // Tatkal
        if (bookingHoursBefore < 24) 
        {
            fare += fare * 0.30;
        }

        // Senior discount
        if (age >= 60) 
        {
            fare -= fare * 0.40;
        }

        System.out.println("Final Fare: " + fare);
    }
}