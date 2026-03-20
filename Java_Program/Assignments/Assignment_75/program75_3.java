/*
    Description : A warehouse has a product in stock. Every time a customer places an order, the system must check if enough stock exists.
                  If possible, fulfill it and update remaining stock. If stock becomes very low, show alert.

            Rules:
                If requested quantity > available stock -> order fails
                Else deduct quantity
                If remaining stock < 5 -> print low stock alert

    Input:
        Current stock (integer)
        Requested quantity (integer)

    Validations:
        Stock cannot be negative
        Requested quantity must be > 0

    Expected Output:
        If successful:
            Order Processed Successfully
            Remaining Stock: <value>
            If remaining < 5 also print: Low Stock Alert!
        If failed:
            Order Failed: Insufficient Stock

    Author : Rekha Shankarlal Kumawat

    Date : 11 / 03 / 2026

*/

import java.util.Scanner;

class program75_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Quantity = 0;
        int Stock = 0;


        System.out.println("Enter Current Stock :- ");
        Stock = sobj.nextInt();
    
        System.out.println("Rquested Quantity:- ");
        Quantity = sobj.nextInt();

        if(Quantity < 0 || Stock < 0)
        {
            System.out.println("Input Cannot be Negative");
            return ;
        }
        
        if(Quantity > Stock)
        {
            System.out.println("Ordered Failed : Insufficient Stock");
            return ;
        }
        else
        {
            Stock = Stock - Quantity;

            System.out.println("Orderd Processed Successfully");
            System.out.println("Remaining Stock : "+ Stock);

            if(Stock < 5)
            {
                System.out.println("Low Stock Alert");
            }
        }
        
        
    
    }
}
