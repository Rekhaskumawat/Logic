/*
    Description :A fitness app records steps for 7 days. It wants to show how many days user achieved the goal and what the highest step count was.

    Input:
        7 integers (steps)

    Validations:
        Steps must be >= 0

    Expected Output:

        Goal Achieved Days: <count>
        Maximum Steps in Week: <value>

    Author : Rekha Shankarlal Kumawat

    Date : 19 / 03 / 2026

*/
import java.util.Scanner;

class program78_3
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int steps[] = new int[7];
        int goal = 10000;      // daily goal
        int count = 0;
        int max = 0;

        System.out.println("Enter steps for 7 days:");

        for(int i = 0; i < 7; i++)
        {
            steps[i] = sobj.nextInt();

            if(steps[i] < 0)
            {
                System.out.println("Invalid input");
                return;
            }

            if(steps[i] >= goal)
            {
                count++;
            }

            if(steps[i] > max)
            {
                max = steps[i];
            }
        }

        System.out.println("Goal Achieved Days: " + count);
        System.out.println("Maximum Steps in Week: " + max);
    }
}
