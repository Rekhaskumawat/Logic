/*
    Description :  User enters usage: calls (min), data (GB), SMS (count). App suggests the cheapest plan among 4 plans.

                    Input: mins, gb, sms
                    Output: recommendedPlan, totalCost

                    Twist: if usage exceeds plan limits, add per-unit extra

    Author : Rekha Shankarlal Kumawat

    Date : 19 / 03 / 2026

*/
import java.util.Scanner;

class program77_3
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int mins = 0;
        int gb = 0;
        int sms = 0;

        System.out.println("Enter the minutes : ");
        mins = sobj.nextInt();

        System.out.println("Enter the gb : ");
        gb= sobj.nextInt();
        
        System.out.println("Enter the sms : ");
        sms = sobj.nextInt();

        double[] cost = new double[4];

        // Plan 1
        cost[0] = 199;
        if (mins > 300) 
        {
            cost[0] += (mins - 300) * 0.5;
        }
        if (gb > 2) 
        {
            cost[0] += (gb - 2) * 10;
        }
        // Plan 2
        cost[1] = 399;
        if (mins > 600)
        {
             cost[1] += (mins - 600) * 0.4;
        }

        // Plan 3
        cost[2] = 599; // unlimited

        // Plan 4
        cost[3] = 299;
        if (gb > 4) 
        {
            cost[3] += (gb - 4) * 8;
        }

        double minCost = cost[0];
        int plan = 1;

        for (int i = 1; i < 4; i++) 
        {
            if (cost[i] < minCost)
            {
                minCost = cost[i];
                plan = i + 1;
            }
        }

        System.out.println("Recommended Plan: Plan " + plan);
        System.out.println("Total Cost: " + minCost);
    }
}