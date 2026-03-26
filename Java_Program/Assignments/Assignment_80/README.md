# Scenario Based Question

### Question 1 (program80_1)

```
Design a Java application to analyze electricity consumption of multiple cities over a week.
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

```
---

### Question 2 (program80_2)

```
    Description : Design a Java program to determine whether a given square matrix is a Magic Square.
                    A Magic Square is defined as:
                    All row sums are equal.
                    All column sums are equal.
                    Both diagonal sums are equal.

    Input Format:
                First line: Integer N (size of square matrix)
                Next N lines: N integers each

    Validations:
                N > 0
                Matrix must be square

    Output Format:

            Matrix is a Magic Square
            OR
            Matrix is NOT a Magic Square

```
---

### Question 3 (program80_3)

```
    Description : Design a Java application to simulate a warehouse robot moving inside a grid.
                The warehouse is represented as a matrix:
                        0 → Free space
                        -1 → Obstacle
                Robot starts at position (0,0) and must reach (R-1, C-1).
                Robot can only move:
                        Right
                        Down

    Requirements:
                Determine if a valid path exists.
                If exists, print "Path Available".
                Otherwise print "No Path Found"

    Input Format:
                First line: Integer R
                Second line: Integer C
                Next R lines: C integers (0 or -1)

    Validations:
                R > 0
                C > 0
                Matrix values must be 0 or -1

    Sample Input:
                3
                3
                0   0  0
                -1  0 -1
                0   0  0

    Sample Output:
                Path Available


```
---
