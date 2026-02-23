/*

    Description : Accept Matrix from User and reverse the content of each row

    Input : 3   2   5   9   
            4   3   2   2
            8   4   1   5
            3   9   7   5

    Output : 9  5   2   3
             2  2   3   4
             9  1   4   8
             5  7   9   3

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

    public void ReverseRow()
    {
        int i = 0;
        int j = 0;
        int iStart = 0;
        int iEnd = 0;
        int temp = 0;

        for(i = 0 ; i < this.iRow ; i++)
        {   
            iStart = 0;
            iEnd = this.iCol-1;

            for(j = 0; j < this.iCol ; j++ , iEnd-- , iStart++)
            {
                if(iStart < iEnd)
                {
                    temp = Arr[i][iStart];
                    Arr[i][iStart] = Arr[i][iEnd];
                    Arr[i][iEnd] = temp;
                }
            }
            
        }

        this.Display(); 
        
    }
}

class program73_2
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
        mobj.ReverseRow();

        sobj.close();
    }
}