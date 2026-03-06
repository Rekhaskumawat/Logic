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

    public void Accept()
    {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the Elements of Matrix ");

      int i = 0;
      int j = 0;

      for(i = 0 ; i < this.iRow ; i++)
      {
        System.out.println("Enter the elemnts of Row : "+ (i+1));

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

      System.out.println("Elements of Matrix are :");

      for(i = 0 ; i < this.iRow ; i++)
      {
          for(j = 0 ; j < this.iCol ; j++)
          {
              System.out.print(Arr[i][j]+"\t");
          }
          System.out.println();
      }
    }

    public int Summation()
    {
      int i = 0;
      int j = 0;
      int iSum = 0;

      for(i = 0 ; i < this.iRow ; i++)
      {
          for(j = 0 ; j < this.iCol ; j++)
          {
             iSum = iSum + Arr[i][j];
          }
      }
      return iSum ;
    }

    public float Average()
    {
      int iSum = 0;

      iSum = this.Summation();

      return ((float)iSum /(float)(this.iRow*this.iCol));
    }

    
}

class program792
{
  public static void main(String A[])
  { 
    Matrix mobj = new Matrix(4,4);
    mobj.Accept();
    mobj.Display();

    System.out.println("Summation of all Elements : "+mobj.Summation());
    System.out.println("Average of  Elements : "+mobj.Average());
    
  }  
}
