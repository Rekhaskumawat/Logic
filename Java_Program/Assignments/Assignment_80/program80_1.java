
/*

    Description : Design a Java application to analyze electricity consumption of multiple cities over a week.
                    Rows represent cities.
                    Columns represent 7 days of the week.
                    Each cell contains units consumed on that day.

    Requirements:

                Calculate total weekly consumption for each city.
                Identify city with highest consumption.
                Identify the day with maximum overall consumption.
                Print cities that consumed more than 500 units in a week.

    Input Format:
                First line: Integer N (number of cities)
                Next N lines: 7 integers each (units per day)

    Validations:
            N > 0
            Units cannot be negative

    Output Format:
            Weekly Consumption:
            City 1: <units>
            City 2: <units>
            
            Highest Consumption: City <number>
            Peak Consumption Day: Day <number>

    Author : Rekha Shankarlal Kumawat
    
    Date : 19/03 / 2026

*/

import java.util.Scanner;

class Electricity
{
    public int iRow;
    public int iCol;
    public int Arr[][];

    public Electricity(int a)
    {
        this.iRow = a;
        this.iCol = 7;
        this.Arr = new int[this.iRow][this.iCol];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        int iCnt1 = 0;
        int iCnt2 = 0;

        System.out.println("Enter electricity units for 7 days:");

        for(iCnt1= 0 ; iCnt1 < this.iRow ; iCnt1++)
        {
            for(iCnt2 = 0 ; iCnt2 < this.iCol ; iCnt2++)
            {
                Arr[iCnt1][iCnt2] = sobj.nextInt();

                if(Arr[iCnt1][iCnt2] < 0)
                {
                    System.out.println("Invalid Input");
                    System.exit(0);
                }
            }
        }
    }

    void WeeklyTotal()
    {
        System.out.println("Weekly Consumption:");
        int iCnt1 = 0;
        int iCnt2 = 0;
        int total = 0;

        for(iCnt1 = 0 ; iCnt1 < this.iRow ; iCnt1++)
        {
            total = 0;

            for(iCnt2 = 0 ; iCnt2 < this.iCol ; iCnt2++)
            {
                total = total + Arr[iCnt1][iCnt2];
            }

            System.out.println("City " + (iCnt1+1) + ": " + total);
        }
    }

    int HighestCity()
    {
        int max = 0;
        int index = 0;
        int iCnt1 = 0;
        int iCnt2 = 0;
        int total = 0 ;

        for(iCnt1 = 0 ; iCnt1 < this.iRow ; iCnt1++)
        {
            total = 0;

            for(iCnt2 = 0 ; iCnt2 < this.iCol ; iCnt2++)
            {
                total = total + Arr[iCnt1][iCnt2];
            }

            if(total > max)
            {
                max = total;
                index = iCnt1;
            }
        }
        return index;
    }

    int PeakDay()
    {
        int max = 0;
        int index = 0;
        int iCnt1 = 0;
        int iCnt2= 0;
        int total = 0;

        for(iCnt2 = 0 ; iCnt2 < this.iCol ; iCnt2++)
        {
            total = 0;

            for(iCnt1 = 0 ; iCnt2 < this.iRow ; iCnt1++)
            {
                total = total + Arr[iCnt1][iCnt2];
            }

            if(total > max)
            {
                max = total;
                index = iCnt2;
            }
        }

        return index;
    }

    void MoreThan500()
    {
        int iCnt1 =0 ;
        int iCnt2 = 0;
        int total = 0;

        for(iCnt1 = 0 ; iCnt1 < this.iRow ; iCnt1++)
        {
            total = 0;

            for(iCnt2 = 0 ; iCnt2 < this.iCol ; iCnt2++)
            {
                total = total + Arr[iCnt1][iCnt2];
            }

            if(total > 500)
            {
                System.out.println("City " + (iCnt1+1) + " consumed more than 500 units");
            }
        }
    }
}

class program80_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int N = 0;
        int iRet1 = 0;
        int iRet2 = 0;

        System.out.println("Enter number of cities:");
        N = sobj.nextInt();

        if(N <= 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        Electricity eobj = new Electricity(N);

        eobj.Accept();
        eobj.WeeklyTotal();

        iRet1 = eobj.HighestCity();
        System.out.println("Highest Consumption: City " + (iRet1+1));

        iRet2 = eobj.PeakDay();
        System.out.println("Peak Consumption Day: Day " + (iRet2+1));

        eobj.MoreThan500();
    }
}