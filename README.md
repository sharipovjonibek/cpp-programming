# OOP-Lab

Basic C++ and Object-Oriented Programming (OOP) lab assignments, covering fundamental concepts such as classes, inheritance, polymorphism, and encapsulation.

---

# Lab_01

1. Print “Welcome to IUT”.
2. Declaring Variable and Printing its Value
   *(Hint: one variable of each type like: int, float, double, char).*
3. Write a program to Calculate Area of Square.
   *(Hint: take input from user).*

---

# Lab_02

1. Write a program that inputs three integers from the keyboard and prints the sum, average, product, smallest and largest of these numbers.
   *(Hint: Please do not use the min and max functions)*
2. Write a program that calculates the squares and cubes of the integers from 0 to 10. Use tabs to print the following neatly formatted table of values:
   ![My Image](images/Lab_02.png)
   *(Hint: Please generate this table without employing a for loop)*
3.  Create an application that calculates your daily driving cost, so that you can estimate how much money could be saved by car pooling. The application should input the following information and display the user’s cost per day of driving to work: 

    a) Total km driven per day.  
    b) Cost per liter of gasoline.  
    c) Average km per liter.  
    d) Total cost per day.

    (Hint: Total cost per day = (total km / average km) * cost per liter)

---

# Lab_03

1. Write a program to calculate tax, given the following conditions: 
    ```text
    If salary is less than 2000 USD then no tax will be zero.
    If salary is in the range of 2001 to 3000 USD (2001<=salary<3000) then tax will be charged with rate of 20%.
    If salary is in the range of 3001 to 5000 USD (3001<=salary<5000) then tax will be charged with rate of 30%. 
    If taxable income is above 5000 then tax will be charged with rate of 40%.

(Hint: formula for tax is: (salary *rate)/100. You need to display two things: 
Tax payable. Income after tax deduction)

2. Write a program to test whether a number entered is odd, even or zero.

3. A certain grade of steel is graded according to the following conditions:
    ```text
    a. Hardness must be greater than 50. 
	b. Carbon content must be less than 0.7. 
	c. Tensile strength must be greater than 5600. 

The grades are as follows:

    If all three conditions are satisfied then Grade will be 10.
    If condition (a) and (b) are satisfied then Grade will be 9.
    If conditions (b) and (c) are satisfied then Grade will be 8.
    If conditions (a) and (c) are satisfied then Grade will be 7.
    If any one condition is satisfied then Grade will be 6. 
    If none of the conditions are satisfied then Grade will be 5. 

Write a program which will require the user to input values of hardness, carbon content and tensile strength of the steel and print the grade of steel according to the given conditions.

---

# Lab_04

1. Write a program that uses a while statement to calculate and print the product of the odd integers from 1 to 15.
2. Program to calculate sum of numbers from m to n.
(Hint: Input two numbers m and n. Find sum of all numbers from m to n. For example, m=3 and n=8 then sum will be 3+4+5+6+7+8=33.)

3. Program to display a calculator with arithmetic operator using switch case.
4. Program to input a number and then calculate sum of its digits.
(Hint:  let number = 562. Then you should print 5+6+2=13.)

---

# Lab_05

1. The process of finding the largest number is used frequently in computer applications. For example, a program that determines the winner of a sales contest inputs the number of units sold by each salesperson. The salesperson who sells the most units wins the contest. Write a C++ program that uses a for statement to determine and print the largest number of 10 numbers input by the user. 

Your program should use three variables, as follows:

    counter: A counter to count to 10 (i.e., to keep track of how many numbers have
    been input and to determine when all 10 numbers have been processed).
    number: The current number input to the program.
    largest: The largest number found so far.
2. Write a C++ program that uses a for statement and the tab escape sequence
`\t` to print the following table of values:
   ![alt text](images/Lab_05.png)
3. Print stars Sequence1:

    *
    **
    ***
    ****
    *****

4. Print numbers Sequence2:
    ```text
         1
        12 
       123
      1234
     12345