/*
    Description : A student gets scholarship only if ALL conditions are satisfied:
                    Marks >= 80%
                    Attendance >= 75%
                    Income <= ₹3,00,000

    Author : Rekha Shankarlal Kumawat

    Date : 14 / 03 / 2026

*/

import java.util.Scanner;

class program76_2
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int marks = 0;
        int attendance = 0;
        int income = 0;

        System.out.println("Enter Your Marks :- ");
        marks = sobj.nextInt();

        System.out.println("Enter Your Attendence:- ");
        attendance = sobj.nextInt();

        System.out.println("Enter Your Income :- ");
        income = sobj.nextInt();

        if(marks < 0 || marks > 100 || attendance < 0 || attendance > 100 || income < 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        if(marks >= 80 && attendance >= 75 && income <= 300000)
        {
            System.out.println("Scholarship Approved");
        }
        else
        {
            System.out.println("Scholarship Rejected");
        }
    }
}