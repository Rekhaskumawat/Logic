import java.util.Scanner;

class Matrix
{
    public int iRow;
    public int iCol;
    public int Arr[][];

    public Matrix(int a , int b)
    {
        this.iRow = a;
        this.iCol = b;

        Arr = new int[iRow][iCol];
    }
}

class program787 
{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);
    
    Matrix mobj = new Matrix(4,4);
    
  }  
}
