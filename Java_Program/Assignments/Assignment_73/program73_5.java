/*

    Description : Accept Matrix from User and Check Whether the matrix is Sparse matrix or not

                  Sparse matrix is a matrix with the majority of itd elements equal to zero

    Input : 1   0   3   0   
            0   6   0   0
            0   0   1   0
            9   0   0   9

    Output : Sparse Matrix

    Author : Rekha Shankarlal Kumawat
    
    Date : 23 /02 / 2026

*/

import java.util.*;

class Matrix
{
    public int iRow = 0;
    public int iCol = 0;
    public int Arr[][];

    public Matrix(int a , int b )
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

    public boolean ChkSparse()
    {
        int i = 0;
        int j = 0;
        int ZeroCount = 0;

        for(i = 0 ; i < this.iRow; i++)
        {   

            for(j = 0 ; j < this.iCol ; j++)
            {
                if(Arr[i][j] == 0)
                {
                    ZeroCount++;
                }
            }
            
        }

        return (ZeroCount > ((this.iRow*this.iCol)-ZeroCount));    
    }
}

class program73_5
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
        
        if(iRow != iCol)
        {
            System.out.println("Matrix Rows and Columns should be same");
            return;
        }

        Matrix mobj = new Matrix(iCol, iRow );
        mobj.Accept();
        mobj.Display();
        
        if(mobj.ChkSparse())
        {
            System.out.println("Matrix is Sparse Matrix");
        }
        else
        {
            System.out.println("Matrix is not an  Sparse Matrix");
        }

        sobj.close();
    }
}