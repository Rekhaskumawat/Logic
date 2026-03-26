# Assignment 79 (Senario Based Question)

### Question 1 (program79_1)

```
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

```
---

### Question 2 (program79_2)

  ```
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

  ```
