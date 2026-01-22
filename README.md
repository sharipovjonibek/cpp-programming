# OOP Lab Assignments

This repository contains **basic C++ and Object-Oriented Programming (OOP) lab assignments**, covering fundamental concepts such as **classes, inheritance, polymorphism, and encapsulation**.

---

## Lab 01

1. **Print a Welcome Message**
   - Print: `Welcome to IUT`

2. **Variable Declaration and Printing**
   - Declare variables of different types (`int`, `float`, `double`, `char`) and print their values.

3. **Calculate Area of Square**
   - Input the side of a square from the user and calculate its area.

---

## Lab 02

1. **Operations on Three Integers**
   - Input three integers from the keyboard.
   - Calculate and print:
     - Sum
     - Average
     - Product
     - Smallest and largest number  
   *(Do not use built-in `min` or `max` functions.)*

2. **Squares and Cubes Table**
   - Print a table of squares and cubes of integers from 0 to 10 using tabs.
   - *(Without using a for loop)*  

   ![Lab_02 Table](images/Lab_02.png)

3. **Daily Driving Cost Calculator**
   - Input:
     - Total km driven per day
     - Cost per liter of gasoline
     - Average km per liter
   - Calculate and display **total cost per day**:  
     ```
     Total cost per day = (total km / average km per liter) * cost per liter
     ```

---

## Lab 03

1. **Income Tax Calculator**
   - Tax rules:
     - Salary < 2000 → 0% tax
     - 2001 ≤ Salary < 3000 → 20% tax
     - 3001 ≤ Salary < 5000 → 30% tax
     - Salary > 5000 → 40% tax
   - Display:
     - Tax payable
     - Income after tax deduction

2. **Odd, Even, or Zero Checker**
   - Input a number and print whether it is **odd**, **even**, or **zero**.

3. **Steel Grade Calculator**
   - Input:
     - Hardness
     - Carbon content
     - Tensile strength
   - Grading rules:
     ```
     All conditions satisfied → Grade 10
     a & b satisfied → Grade 9
     b & c satisfied → Grade 8
     a & c satisfied → Grade 7
     Any one condition satisfied → Grade 6
     None satisfied → Grade 5
     ```
   - Print the steel grade based on input values.

---

## Lab 04

1. **Product of Odd Integers (1-15)**
   - Use a `while` loop to calculate and print the product.

2. **Sum of Numbers from m to n**
   - Input two numbers `m` and `n`.
   - Calculate sum of all numbers from `m` to `n`.

3. **Calculator Using Switch Case**
   - Input two numbers and an arithmetic operator.
   - Perform the operation and display the result.

4. **Sum of Digits**
   - Input a number and calculate the sum of its digits.  
     Example: `562 → 5 + 6 + 2 = 13`

---

## Lab 05

1. **Find Largest Number**
   - Input 10 numbers from the user.
   - Use a `for` loop to determine and print the largest number.
   - Variables used:
     - `counter`: counts input numbers
     - `number`: current input
     - `largest`: stores the largest number found so far

2. **Print Table Using Tabs**
   - Use a `for` loop and `\t` to print a formatted table.  

   ![Lab_05 Table](images/Lab_05.png)

3. **Star Pattern Sequence**
    ```text
    *
    **
    ***
    ****
    *****

4. **Number Pattern Sequence**
    ```text
        1
       12
      123
     1234
    12345
