/*
    Description :  Seats have different prices per row. User tries booking multiple seats; reject if already booked. If group size ≥ 6, give 10% discount.

                    Input: rows, cols, bookedSeatList, requestedSeatList
                    Output: success/fail + total cost + remaining seats

    Author : Rekha Shankarlal Kumawat

    Date : 19 / 03 / 2026

*/
import java.util.*;

class program77_5
{
    public static void main(String[] args)
    {
        int rows = 5;
        int cols = 5;

        Set<String> bookedSeats = new HashSet<>();
        bookedSeats.add("A1");
        bookedSeats.add("B2");

        String[] requested = {"A2", "A3", "A4", "A5", "B1", "B3"};

        double total = 0;
        boolean success = true;

        for (String seat : requested) 
        {
            if (bookedSeats.contains(seat)) 
            {
                success = false;
                break;
            }

            char row = seat.charAt(0);
            int price;

            if (row == 'A') 
            {
                price = 200;
            } 
            else if (row == 'B') 
            {
                price = 150;
            } else 
            {
                price = 100;
            }
            total += price;
        }

        if (success) {
            if (requested.length >= 6)
            {
                total *= 0.9;
            }

            System.out.println("Booking Success");
            System.out.println("Total Cost: " + total);
        }
        else 
        {
            System.out.println("Booking Failed - Seat already booked");
        }
    }
}