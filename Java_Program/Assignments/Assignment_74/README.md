# Senario Based Question
---

### Question 1 (Program74_1.java)

```
Description : In your college library, students borrow books for exams and assignments.
                    The librarian wants an automatic fine calculator so that staff don’t need to calculate fines manually for every student.
                    As per policy, a student can keep a borrowed book for up to 7 days without any penalty.
                    If the book is returned late, the fine depends on how many days the student kept the book in total.
                    
    Fine Rules
        If the book is returned within 7 days → No fine
        If total days are 8 to 12 → ₹5 per day for each day beyond 7
        If total days are more than 12
        ₹5 per day for days 8–12
        ₹10 per day for each day beyond 12
    
    Input
        One integer: total number of days the book was kept (daysKept)
        Validations
        If daysKept < 0 → invalid input
    
    Expected Output
        If daysKept ≤ 7
        Returned on time. No fine applicable.
        Else
        Total fine to be paid: ₹<fineAmount>
        
```

---

### Question 2 (Program74_2.java)
```
Description : A bank ATM must follow strict safety rules to avoid fraud and ensure customers maintain a minimum balance.
                    A customer inserts the card, checks their balance, and requests a withdrawal.
                    The ATM must either approve the request and update the balance or reject it and show the correct reason.
                    
    Rules
        Withdrawal amount must be a multiple of ₹100
        Maximum withdrawal per transaction is ₹25,000
        After withdrawal, balance must remain at least ₹1,000
        Input

    Line 1: Current balance (integer)
    Line 2: Requested withdrawal amount (integer)

    Validations

        If balance < 0 or withdrawAmount ≤ 0 → invalid input
    
    Expected Output
        If successful:
            Transaction Successful
            Remaining Balance: ₹<newBalance>
        If failed:
            Transaction Failed: <Reason>
```

---

### Question 3 (Program74_3.java)
```
Descritption : A university wants to generate student results automatically.
        Each student has marks in five subjects, each out of 100.
        The result should clearly show whether the student failed in any subject and, if passed, the final classification based on average marks.
Rules :
        If marks in any subject < 35 → student is Fail
        If the student passes all subjects, calculate average and classify:
        Average ≥ 75 → Distinction
        Average ≥ 60 → First Class
        Average ≥ 50 → Second Class
        Average < 50 → Pass

Input : 
    Five integers (marks in 5 subjects)
    Validations
    Each mark must be between 0 and 100
Expected Output:
    If fail:
        Result: Fail
    Else:
        Average Marks: <avg>
        Final Result: <Classification>
```

---

### Question 4 (Program74_4.java)
```
Descritption : An electricity company bills customers monthly based on how many units they consumed.
                    The billing is progressive, meaning units are charged in slabs.
    Slabs:
            First 100 units → ₹5 per unit
            Next 100 units (101–200) → ₹7 per unit
            Above 200 units → ₹10 per unit
    Input:
        One integer: units consumed
        Validations
        Units cannot be negative

    Expected Output:
        Total Units Consumed: <units>
        Total Electricity Bill: ₹<amount>

```

---
### Question 5 (Program74_5.java)
```
Descritption : An e-commerce platform wants to compute the final payable amount at checkout.
                Discounts are based on purchase amount, and premium members receive an extra discount after the main discount.
    
    Discount Rules
                Amount > 5000 → 20% discount
                Amount > 2000 → 10% discount
                Otherwise → no discount
                Premium members → extra 5% discount on the discounted amount
    
    Input:
            Purchase amount (integer)
            Membership type: Premium / Regular
            Validations
            Amount must be > 0
            Membership must be valid

    Expected Output:

            Original Amount: ₹<amount>
            Total Discount: ₹<discount>
            Final Payable Amount: ₹<finalAmount>

```

---
