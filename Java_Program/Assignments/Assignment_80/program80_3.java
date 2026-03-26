
/*

    Description : Design a Java application to simulate a warehouse robot moving inside a grid.
                The warehouse is represented as a matrix:
                        0 → Free space
                        -1 → Obstacle
                Robot starts at position (0,0) and must reach (R-1, C-1).
                Robot can only move:
                        Right
                        Down

    Requirements:
                Determine if a valid path exists.
                If exists, print "Path Available".
                Otherwise print "No Path Found"

    Input Format:
                First line: Integer R
                Second line: Integer C
                Next R lines: C integers (0 or -1)

    Validations:
                R > 0
                C > 0
                Matrix values must be 0 or -1

    Sample Input:
                3
                3
                0   0  0
                -1  0 -1
                0   0  0

    Sample Output:
                Path Available

    Author : Rekha Shankarlal Kumawat
    
    Date : 19/03 / 2026

*/

import java.util.Scanner;

class Warehouse
{
    public int iRow;
    public int iCol;
    public int Arr[][];

    public Warehouse(int a , int b)
    {
        this.iRow = a;
        this.iCol = b;
        Arr = new int[this.iRow][this.iCol];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt1 =0 ;
        int iCnt2 = 0;

        System.out.println("Enter matrix:");

        for(iCnt1 = 0 ; iCnt1 < this.iRow ; iCnt1++)
        {
            for(iCnt2 = 0 ; iCnt2 < this.iCol ; iCnt2++)
            {
                Arr[iCnt1][iCnt2] = sobj.nextInt();

                if(Arr[iCnt1][iCnt2] != 0 && Arr[iCnt1][iCnt2] != -1)
                {
                    System.out.println("Invalid Input");
                    System.exit(0);
                }
            }
        }
    }

    boolean CheckPath()
    {
        boolean path[][] = new boolean[iRow][iCol];
        int iCnt1 = 0;
        int iCnt2 = 0;

        if(Arr[0][0] == -1)
        {
            return false;
        }

        path[0][0] = true;

        // first row
        for(iCnt2 = 1 ; iCnt2 < this.iCol ; iCnt2++)
        {
            if(Arr[0][iCnt2] == 0 && path[0][iCnt2-1] == true)
            {
                path[0][iCnt2] = true;
            }
        }

        // first column
        for(iCnt1 = 1 ; iCnt1 < this.iRow ; iCnt1++)
        {
            if(Arr[iCnt1][0] == 0 && path[iCnt1-1][0] == true)
            {
                path[iCnt1][0] = true;
            }
        }

        // rest matrix
        for(iCnt1 = 1 ; iCnt1 < this.iRow ; iCnt1++)
        {
            for(iCnt2 = 1 ; iCnt2 < this.iCol ; iCnt2++)
            {
                if(Arr[iCnt1][iCnt2] == 0 && (path[iCnt1-1][iCnt2] || path[iCnt1][iCnt2-1]))
                {
                    path[iCnt1][iCnt2] = true;
                }
            }
        }

        return path[this.iRow-1][this.iCol-1];
    }
}

class program80_3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int R = 0;
        int C = 0;
        boolean bRet = false ;

        System.out.println("Enter rows:");
        R = sobj.nextInt();

        System.out.println("Enter columns:");
        C = sobj.nextInt();

        if(R <= 0 || C <= 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        Warehouse wobj = new Warehouse(R , C);

        wobj.Accept();

        bRet = wobj.CheckPath();

        if(bRet == true)
        {
            System.out.println("Path Available");
        }
        else
        {
            System.out.println("No Path Found");
        }
    }
}