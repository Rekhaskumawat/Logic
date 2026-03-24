/*
    Description :An online election system stores votes by voter ID.
                Each voter can vote only once. Duplicate IDs are rejected.

    Input:
        Number of votes N
        N voter IDs

    Validations:
        N ≥ 0
        IDs must be non-negative integers

    Expected Output:
        Valid Votes: <count>
        Rejected Duplicate Votes: <count>

    Author : Rekha Shankarlal Kumawat

    Date : 19 / 03 / 2026

*/
import java.util.*;

class program78_2 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        int n = 0;
        int id = 0;
        int duplicate = 0;
        System.out.print("Enter number of votes: ");
        n = sobj.nextInt();

        if (n < 0) 
        {
            System.out.println("Invalid input");
            return;
        }

        Set<Integer> voters = new HashSet<>();

        System.out.println("Enter voter IDs:");

        for (int i = 0; i < n; i++)
        {
            id = sobj.nextInt();

            if (id < 0) 
            {
                System.out.println("Invalid ID");
                i--;
                continue;
            }

            if (voters.contains(id)) 
            {
                duplicate++;
            }
            else
            {
                voters.add(id);
            }
        }

        System.out.println("Valid Votes: " + voters.size());
        System.out.println("Rejected Duplicate Votes: " + duplicate);
    }
}