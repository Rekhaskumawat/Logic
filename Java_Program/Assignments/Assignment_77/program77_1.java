/*
    Description : Calculates total hospital bill including:

                Consultation fee
                Medicine bill
                Room charges per day (Normal / ICU)

                If insured:

                Covers 70% of bill OR ₹50,000 (whichever is lower)

    Author : Rekha Shankarlal Kumawat

    Date : 19 / 03 / 2026

*/
import java.util.Scanner;

class program77_1 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int days = 0;
        String wardType = null; // Normal / ICU
        double medicineBill = 0;
        double consultationFee = 0;
        boolean insured = true;

        System.out.println("Enter the number of Days : ");
        days = sobj.nextInt();

        System.out.println("Enter the Ward Type(ICU / NORMAL) : ");
        wardType = sobj.next(); 

        System.out.println("Enter the medicine Bill: ");
        medicineBill = sobj.nextInt();

        System.out.println("Enter the consultation fess : ");
        consultationFee = sobj.nextInt();

        System.out.println("Enter the status of insured (true / false): ");
        insured = sobj.nextBoolean();

        if (days < 0 || medicineBill < 0 || consultationFee < 0)
        {
            System.out.println("Invalid input");
            return;
        }

        double roomRate;
        if (wardType.equalsIgnoreCase("Normal")) 
        {
            roomRate = 2000;
        } 
        else if (wardType.equalsIgnoreCase("ICU")) 
        {
            roomRate = 5000;
        } 
        else 
        {
            System.out.println("Invalid ward type");
            return;
        }

        double totalBill = consultationFee + medicineBill + (days * roomRate);

        double insuranceCover = 0;
        if (insured) 
        {
            insuranceCover = Math.min(50000, 0.7 * totalBill);
        }

        double finalPay = totalBill - insuranceCover;

        System.out.println("Total Bill: " + totalBill);
        System.out.println("Insurance Cover: " + insuranceCover);
        System.out.println("Final Pay: " + finalPay);
    }
}