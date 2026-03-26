
/*

    Description : Design a Java application that analyzes student performance using a 2D matrix.
                    A college stores marks of students in multiple subjects using a matrix:
                    Rows represent students.
                    Columns represent subjects.
                    Your program must analyze academic performance based on this matrix.

    Requirements:

            Your program should:

                Calculate total marks of each student.
                Identify the topper (student with highest total).
                Calculate average marks for each subject.
                Print students who failed in any subject (marks < 35).
            Input Format:

                First line: Integer N (number of students)
                Second line: Integer M (number of subjects)
                Next N lines: M integers each (marks of each student)
            
            Validations:

                N > 0
                M > 0
                Each mark must be between 0 and 100
                If invalid input is found:
                            Invalid Input
                            

    Input : 80  70  60  
            90  85  88
            30  40  50
        

    Output: 
            Student Totals :
                Student1 : 210
                Student2 : 263
                Studetn 3 : 120
            
            Topper : Student 2

            Subject Averages:
                Subject 1 : 66.67
                Subject 2 : 65.00
                Subject 3 : 66.00

            Student Failed :

                Student 3

    Author : Rekha Shankarlal Kumawat
    
    Date : 19/03 / 2026

*/

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
        this.Arr = new int[this.iRow][this.iCol];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        int iCnt1 = 0;
        int iCnt2 = 0;
        
        System.out.println("Enter the Elemnets :- ");
        for(iCnt1 = 0 ; iCnt1 < this.iRow ; iCnt1++)
        {
            for(iCnt2 = 0 ; iCnt2 < this.iCol ; iCnt2++)
            {
                Arr[iCnt1][iCnt2] = sobj.nextInt();

                if(Arr[iCnt1][iCnt2] < 0 || Arr[iCnt1][iCnt2] > 100)
                {
                    System.out.println("Invalid marks. Enter again:");
                    iCnt2--;
                }  
            }
        }
        
    }
    
    public void TotalOfStudent()
    {
        int total = 0;
        int iCnt1 = 0;
        int iCnt2 = 0;

        System.out.println("Students total :- ");

        for(iCnt1 = 0  ; iCnt1 < this.iRow ; iCnt1++ , total = 0)
        {
            for(iCnt2 = 0 ; iCnt2 < this.iCol ; iCnt2++)
            {
                total = total + Arr[iCnt1][iCnt2];
            }
            System.out.println("Student "+ (iCnt1+1) + " : " + total);
        }
    }

    public int Topper()
    {
        int iMax = 0;
        int total = 0;
        int iCnt1 = 0;
        int iCnt2 = 0;
        int index = 0;

        for(iCnt1 = 0  ; iCnt1 < this.iRow ; iCnt1++ , total = 0)
        {
            for(iCnt2 = 0 ; iCnt2 < this.iCol ; iCnt2++)
            {
                total = total + Arr[iCnt1][iCnt2];
            }
            
            if(total > iMax)
            {
                iMax = total;
                index = iCnt1 ;

            }
        }

        return index ;
    }

    public void SubjectAverage()
    {
        double Average = 0.0;
        int total = 0;
        int iCnt1 = 0;
        int iCnt2 = 0;

        System.out.println("Subject Average :- ");

        for(iCnt1 = 0  ; iCnt1 < this.iCol ; iCnt1++ , Average = 0.0f , total = 0)
        {
            for(iCnt2 = 0 ; iCnt2 < this.iRow ; iCnt2++)
            {
                total = total + Arr[iCnt2][iCnt1];
            }
            Average = total / this.iCol;
            System.out.println("Subject "+ (iCnt1+1) + " : " + Average);
        }
    }

public void FailedStudent()
{
    boolean bFlag = false;
    int iCnt1 = 0 ;
    int iCnt2 = 0 ;

    for(iCnt1 = 0 ; iCnt1 < this.iRow ; iCnt1++)
    {
        bFlag = false;

        for(iCnt2 = 0 ; iCnt2 < this.iCol ; iCnt2++)
        {
            if(Arr[iCnt1][iCnt2] < 35)
            {
                bFlag = true;
                break;
            }
        }

        if(bFlag == true)
        {
            System.out.println("Student "+(iCnt1 +1)+" is Failed");
        }
    }
}
}


class program79_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        Matrix mobj = null;

        int iSubject = 0;
        int iStudent = 0;

        System.out.println("Enter the Number of Students :- ");
        iStudent = sobj.nextInt();

        System.out.println("Enter the Number of Subjects :- ");
        iSubject = sobj.nextInt();

        if(iStudent <= 0 || iSubject <= 0)
        {
            System.out.println(" There should be atleast one Subject and one Student");
            return;
        }

        mobj = new Matrix(iStudent ,iSubject);
        mobj.Accept();
        mobj.TotalOfStudent();
        System.out.println("Student "+(mobj.Topper() + 1) +" is the topper");
        mobj .SubjectAverage();
        mobj.FailedStudent();

    }
}