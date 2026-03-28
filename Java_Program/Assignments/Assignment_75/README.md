
# Question Based On Secnario based

###  Question 1 (program75_1)

```
Description : A Shopping mall parking gate records entry and exit duration in hours
                    the parking system calculates charges based on the total hours a vehicalstayed
                    Long-durationparking attracts additional penalty

    Rules :
                first 2 hours -> 20 rs.
                after 2 ours -> 10 rs. per extra hours
                if total hours > 10 -> add 50 rs. penalty
    
    Input
        total parking hours

    validations :
            hours cannot be negative
    
    Expected Output
        total parking duration : <hours>
        total parking fee : <amount>
```
---

###  Question 2 (program75_2)

```
Description : A bank wants to quickly decide whether a customer is eligible for a personal loan.
                  The system checks the applicant’s details and either approves the loan or rejects with the exact reason.

                  Eligibility Conditions:
                    Age 21 to 60 inclusive
                    Monthly income >= ₹25,000
                    Credit score >= 700
                    Must NOT have an existing unpaid loan
    Input:
        Age
        Monthly income
        Credit score
        Existing unpaid loan (Yes/No)

    Validations:
        Age/income/score must be non-negative   
        Yes/No must be valid

    Expected Output:
        Loan Approved
            OR
        Loan Rejected: <Specific Reason>
```
---

###  Question 3 (program75_3)

```
Description : A warehouse has a product in stock. Every time a customer places an order, the system must check if enough stock exists.
                  If possible, fulfill it and update remaining stock. If stock becomes very low, show alert.

            Rules:
                If requested quantity > available stock -> order fails
                Else deduct quantity
                If remaining stock < 5 -> print low stock alert

    Input:
        Current stock (integer)
        Requested quantity (integer)

    Validations:
        Stock cannot be negative
        Requested quantity must be > 0

    Expected Output:
        If successful:
            Order Processed Successfully
            Remaining Stock: <value>
            If remaining < 5 also print: Low Stock Alert!
        If failed:
            Order Failed: Insufficient Stock
```
---

###  Question 4 (program75_4)

```
Description : A traffic police app records whether a rider violated rules. Each violation has a fixed fine.
                    If multiple violations happen, fines should be added.
                
                    Fines:
                        No helmet -> ₹500
                        No license -> ₹1000
                        Overspeeding -> ₹1500
    Input:
                Helmet worn (Yes/No)
                License available (Yes/No)
                Overspeeding (Yes/No)
    Validations:
            Inputs must be Yes/No only

    Expected Output:
            Total Fine Amount: ₹<amount>
```
---

###  Question 5 (program75_5)

```
Description : A tax portal calculates income tax based on annual income using progressive slabs. Only the amount in a slab is taxed at that slab’s rate.
                  
    Slabs:
            Up to ₹2,50,000 -> 0%
            ₹2,50,001 to ₹5,00,000 -> 5%
            ₹5,00,001 to ₹10,00,000 -> 20%
            Above ₹10,00,000 -> 30%

    Input:
        Annual income (integer)

    Validations:
        Income cannot be negative
    
    Expected Output:
        Annual Income: ₹<income>
        Total Tax Payable: ₹<tax>
```
---
