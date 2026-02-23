/*

    Description : Accept Matrix from User and one number from user 
                    and return frequency of thet number

    Input : 3   2   5   9   
            4   3   2   2
            8   4   1   5
            3   9   7   5

    Input 2 : 2

    Output : 3

    Author : Rekha Shankarlal Kumawat
    
    Date : 21 /02 / 2026

*/

import java.util.*;

class Matrix
{
    public int iRow = 0;
    public int iCol = 0;
    public int iNo = 0;
    public int Arr[][];

    public Matrix(int a , int b , int n)
    {
        this.iRow = a;
        this.iCol = b;
        this.iNo = n;
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

    public int Frequency()
    {
        int i = 0;
        int j = 0;
        int iCount = 0;

        for(i = 0 ; i < this.iRow ; i++)
        {
            for(j = 0 ; j < this.iCol ; j++)
            {
                if(Arr[i][j] == this.iNo)
                {
                    iCount++;
                }
            }
        }
        return iCount ;
    }
}

class program72_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iCol = 0;
        int iRow = 0;
        int iValue = 0;

        System.out.println("Enter Number of Rows :- ");
        iCol = sobj.nextInt();

        System.out.println("Enter Number of columns :- ");
        iRow = sobj.nextInt();

        System.out.println("Enter a Number :- ");
        iValue = sobj.nextInt();

        Matrix mobj = new Matrix(iCol, iRow , iValue);
        mobj.Accept();
        mobj.Display();

        System.out.println(("Frequency of number :- "+mobj.Frequency()));

        sobj.close();
    }
}