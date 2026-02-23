/*

    Description : Accept Matrix from User and return Addition of Diagonal Elements

    Input : 3   2   5   9   
            4   3   2   2
            8   4   1   5
            3   9   7   5

    Output: 12

    Author : Rekha Shankarlal Kumawat
    
    Date : 21 /02 / 2026

*/

import java.util.*;

class Matrix
{
    public int iRow = 0;
    public int iCol = 0;
    public int Arr[][];

    public Matrix(int a , int b)
    {
        this.iRow = a;
        this.iCol = b;
        Arr = new int[this.iRow][this.iCol];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        int i = 0;
        int j = 0;
        
        System.out.println("Enter the Elemnets :- ");
        for(i = 0 ; i < this.iRow ; i++)
        {
            for(j = 0 ; j < this.iCol ; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
        sobj.close();
    }

    public void Display()
    {
        int i = 0;
        int j = 0;

        System.out.println("Elements of Matrix Are :- ");

        for(i = 0 ; i < this.iRow ; i++)
        {
            for(j = 0 ; j < this.iCol ; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
        
    }

    public int DiagonalAddition()
    {
        int i = 0;
        int j = 0;
        int iSum = 0;

        for(i = 0 ; i < this.iRow ; i++)
        {
            for(j = 0 ; j < this.iCol ; j++)
            {
                if(i == j)
                {
                    iSum = iSum +Arr[i][j];
                }
            }
        }
        return iSum ;
    }
}

class program72_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iCol = 0;
        int iRow = 0;

        System.out.println("Enter Number of Rows :- ");
        iCol = sobj.nextInt();

        System.out.println("Enter Number of columns :- ");
        iRow = sobj.nextInt();

        Matrix mobj = new Matrix(iCol, iRow);
        mobj.Accept();
        mobj.Display();

        System.out.println(("Summation of Diagonal Elements :- "+mobj.DiagonalAddition()));

        sobj.close();
    }
}