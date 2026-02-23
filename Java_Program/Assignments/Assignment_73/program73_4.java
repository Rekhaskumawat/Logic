/*

    Description : Accept Matrix from User and Check Whether the matrix is identity matrix or not

                Identity matrix is a squrare matrix with 1's along the diagonal from upper left to
                lower right 0's in all other position

                If it satisfies the structure as explained before then the matrix is called as identity matrix

    Input : 1   0   0   0   
            0   1   0   0
            0   0   1   0
            0   0   0   1

    Output : Diagonal Matrix

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

    public boolean ChkIdentity()
    {
        int i = 0;
        int j = 0;
        boolean bflage = true ;

        for(i = 0 ; i < this.iRow ; i++)
        {   

            for(j = 0 ; j < this.iCol ; j++)
            {
                if(i == j && Arr[i][j] != 1)
                {
                    bflage = false;
                }
            }
            
        }
        return bflage;
    }
}

class program73_4
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
        
        if(mobj.ChkIdentity())
        {
            System.out.println("Matrix is Identity Matrix");
        }
        else
        {
            System.out.println("Matrix is not an  Identity Matrix");
        }

        sobj.close();
    }
}