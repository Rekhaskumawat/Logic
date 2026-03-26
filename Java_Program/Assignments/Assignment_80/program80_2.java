
/*

    Description : Design a Java program to determine whether a given square matrix is a Magic Square.
                    A Magic Square is defined as:
                    All row sums are equal.
                    All column sums are equal.
                    Both diagonal sums are equal.

    Input Format:
                First line: Integer N (size of square matrix)
                Next N lines: N integers each

    Validations:
                N > 0
                Matrix must be square

    Output Format:

            Matrix is a Magic Square
            OR
            Matrix is NOT a Magic Square

    Author : Rekha Shankarlal Kumawat
    
    Date : 19/03 / 2026

*/

import java.util.Scanner;

class Matrix
{
    public int iRow;
    public int iCol;
    public int Arr[][];

    public Matrix(int a, int b)
    {
        this.iRow = a;
        this.iCol = b;
        this.Arr = new int[this.iRow][this.iCol];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt1= 0 ;
        int iCnt2= 0 ;

        System.out.println("Enter matrix elements:");

        for(iCnt1 = 0; iCnt1 < this.iRow; iCnt1++)
        {
            for(iCnt2 = 0; iCnt2 < this.iCol; iCnt2++)
            {
                Arr[iCnt1][iCnt2] = sobj.nextInt();
            }
        }
    }

    boolean CheckMagicSquare()
    {
        int sum = 0;
        int iCnt1 = 0 ;
        int iCnt2 = 0;
        int rowSum =0 ;
        int colSum = 0;

        // Row 1 sum
        for(iCnt2 = 0; iCnt2 < this.iCol; iCnt2++)
        {
            sum = sum + Arr[0][iCnt2];
        }

        // Check rows
        for(iCnt1 = 0; iCnt1 < this.iRow; iCnt1++)
        {
            rowSum = 0;

            for(iCnt2 = 0; iCnt2 < this.iCol; iCnt2++)
            {
                rowSum = rowSum + Arr[iCnt1][iCnt2];
            }

            if(rowSum != sum)
            {
                return false;
            }
        }

        // Check columns
        for(iCnt2 = 0; iCnt2 < this.iCol; iCnt2++)
        {
            colSum = 0;

            for(iCnt1 = 0; iCnt1 < this.iRow; iCnt1++)
            {
                colSum = colSum + Arr[iCnt1][iCnt2];
            }

            if(colSum != sum)
            {
                return false;
            }
        }

        // Diagonal 1
        int diag1 = 0;
        for(iCnt1 = 0; iCnt1 < this.iRow; iCnt1++)
        {
            diag1 = diag1 + Arr[iCnt1][iCnt1];
        }

        if(diag1 != sum)
        {
            return false;
        }

        // Diagonal 2
        int diag2 = 0;
        for(iCnt1 = 0; iCnt1 < this.iRow; iCnt1++)
        {
            diag2 = diag2 + Arr[iCnt1][iRow-iCnt1-1];
        }

        if(diag2 != sum)
        {
            return false;
        }

        return true;
    }
}

class program80_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int N = 0;
        boolean bRet = false ;

        System.out.println("Enter size of square matrix:");
        N = sobj.nextInt();

        if(N <= 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        Matrix mobj = new Matrix(N, N);

        mobj.Accept();

        bRet = mobj.CheckMagicSquare();

        if(bRet == true)
        {
            System.out.println("Matrix is a Magic Square");
        }
        else
        {
            System.out.println("Matrix is NOT a Magic Square");
        }
    }
}