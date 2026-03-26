
/*

    Description : Design a Java application to manage cinema hall seating using a 2D array.
                    The cinema hall has:
                        Rows representing seat rows
                        Columns representing seats in each row
                    Each seat is represented as:
                        0 → Empty
                        1 → Booked
    Requirements:

                Your program must:
                    Count total booked seats.
                    Find row with maximum bookings.
                    Check if any row is completely full.
                    Display seat matrix.
    
    Input Format:
                First line: Integer R (rows)
                Second line: Integer C (columns)
                Next R lines: C integers (0 or 1)

    Validations:
                R > 0
                C > 0
                Matrix values must be 0 or 1 only
                        

    Input : 1 0 1 1
            1 1 1 1
            0 0 1 0
        

    Output: 
            total Booked Seats : 8
            Row with Maximum Booking : Row2
            Full Row Exists : Yes

    Author : Rekha Shankarlal Kumawat
    
    Date : 19/03 / 2026

*/

import java.util.Scanner;

class Cinema
{
    public int iRow;
    public int iCol;
    public int Arr[][];

    public Cinema(int a , int b)
    {
        this.iRow = a;
        this.iCol = b;
        this.Arr = new int[iRow][iCol];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        int iCnt1 = 0  ;
        int iCnt2 = 0  ;

        System.out.println("Enter seating matrix (0 Empty / 1 Booked):");

        for(iCnt1 = 0  ; iCnt1 < this.iRow ; iCnt1++)
        {
            for(iCnt2 = 0 ; iCnt2 < this.iCol ; iCnt2++)
            {
                Arr[iCnt1][iCnt2] = sobj.nextInt();

                if(Arr[iCnt1][iCnt2] != 0 && Arr[iCnt1][iCnt2] != 1)
                {
                    System.out.println("Invalid Input");
                    System.exit(0);
                }
            }
        }
    }

    void TotalBooked()
    {
        int count = 0;
        int iCnt1 = 0;
        int iCnt2 = 0;

        for(iCnt1 = 0 ; iCnt1 < this.iRow ; iCnt1++)
        {
            for(iCnt2= 0 ; iCnt2 < this.iCol ; iCnt2++)
            {
                if(Arr[iCnt1][iCnt2] == 1)
                {
                    count++;
                }
            }
        }

        System.out.println("Total Booked Seats: " + count);
    }

    int MaxBookedRow()
    {
        int max = 0;
        int iCount = 0;
        int index = 0;
        int iCnt1 = 0;
        int iCnt2= 0;

        for(iCnt1 = 0 ; iCnt1 < this.iRow ; iCnt1++)
        {
            iCount = 0;

            for(iCnt2 = 0 ; iCnt2 < this.iCol ; iCnt2++)
            {
                if(Arr[iCnt1][iCnt2] == 1)
                {
                    iCount++;
                }
            }

            if(iCount > max)
            {
                max = iCount;
                index = iCnt1;
            }
        }

        return index;
    }

    void FullRow()
    {
        boolean bFlag = false;
        int iCnt1 = 0;
        int iCnt2 = 0;
        int iCount =0 ;

        for(iCnt1 = 0 ; iCnt1 < this.iRow ; iCnt1++)
        {
            iCount = 0;

            for(iCnt2 = 0 ; iCnt2 < this.iCol ; iCnt2++)
            {
                if(Arr[iCnt1][iCnt2] == 1)
                {
                    iCount++;
                }
            }

            if(iCount == this.iCol)
            {
                bFlag = true;
                break;
            }
        }

        if(bFlag == true)
        {
            System.out.println("Full Row Exists: Yes");
        }
        else
        {
            System.out.println("Full Row Exists: No");
        }
    }

    void Display()
    {
        System.out.println("Seat Matrix:");
        int iCnt1 = 0;
        int iCnt2 = 0;

        for(iCnt1 = 0 ; iCnt1 < this.iRow ; iCnt1++)
        {
            for(iCnt2 = 0 ; iCnt2 < this.iCol ; iCnt2++)
            {
                System.out.print(Arr[iCnt1][iCnt2] + " ");
            }
            System.out.println();
        }
    }
}

class program79_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iRow = 0;
        int iCol = 0;
        int iRet = 0 ;

        System.out.println("Enter number of rows:");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns:");
        iCol = sobj.nextInt();

        if(iRow <= 0 || iCol <= 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        Cinema cobj = new Cinema(iRow , iCol);

        cobj.Accept();
        cobj.TotalBooked();

        iRet = cobj.MaxBookedRow();
        System.out.println("Row With Maximum Bookings: Row " + (iRet+1));

        cobj.FullRow();
        cobj.Display();
    }
}