# C++ & OOP Learning Journey
Welcome to my C++ and Object-Oriented Programming learning journey.

This repository is a collection of hands-on lab assignments that I completed while learning C++ at university. Each lab focuses on building a strong foundation step by step, starting from simple console programs and moving toward full OOP design, inheritance, polymorphism, operator overloading, file handling, and templates.

Instead of only reading theory, I learned by writing real programs that solve practical problems - calculators, grading systems, banking systems, library management, hospital systems, and more.

## What You will learn here
By going through these labs, you can practice and understand:
- C++ basics (variables, input/output, operators)
- Control structures (if/else, loops, switch)
- Functions and recursion
- Arrays and pointers
- Dynamic memory allocation (new / delete)
- Object-Oriented Programming:
   - Classes and objects
   - Constructors and destructors
   - Encapsulation (getters/setters)
   - Inheritance
   - Polymorphism (compile-time & run-time)
   - Operator overloading
- Templates (function and class templates)
- File handling (reading/writing with streams)
- Real-world style mini systems (ATM, Library, Hospital, University, Bank, Stock Exchange)

Each lab builds on the previous one, so beginners can follow the path from "Hello World"  →   "Full OOP Systems".

## Resources 
Here are some of the main resources that helped me while learning C++ and OOP:
["Mastering Data Structures & Algorithms using C and C++" by Abdul Bari](https://www.udemy.com/course/datastructurescncpp)
["C++ Full Course for free" by Bro Code](https://www.youtube.com/watch?v=-TkoO8Z07hI)
["C++ Programming Course - Beginner to Advanced" by freeCodeCamp.org](https://www.youtube.com/watch?v=8jLOx1hD3_o)
["C++" by The Cherno](https://www.youtube.com/playlist?list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb)
["C++" by CodeBeauty](https://www.youtube.com/playlist?list=PL43pGnjiVwgTg9IGE0ijSMDxVG66Lhye2)
[GeeksforGeeks](https://www.geeksforgeeks.org/cpp/c-plus-plus/)
[w3schools](https://www.w3schools.com/cpp/default.asp)

## How to Use This Repository
1. Pick a lab.
2. Read the task.
3. Try solving it yourself first.
4. Then compare with solution code.

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

---

## Lab 06

1. Write a program using function that use for statement, returns average of numbers from 1 to 10.

2. Write a function that takes an integer value and returns the number with its digits reversed. For example, given the number 7631, the function should return 1367.

3. Celsius and Fahrenheit Conversion
- **Task:** Implement three integer functions:
  1. `celsius(int f)` - returns the Celsius equivalent of a Fahrenheit temperature.
  2. `fahrenheit(int c)` - returns the Fahrenheit equivalent of a Celsius temperature.
  3. Write a program using these functions to print **charts**:
     - Fahrenheit equivalents of all Celsius temperatures from `0` to `100`.
     - Celsius equivalents of all Fahrenheit temperatures from `32` to `212`.
     - Format output in neat tables for readability.

- **Hints:**

  ![Lab_06 Hint](images/Lab_06.png)

---

## Lab 07

### 1. Area Calculation (Function Overloading)
Write a program to calculate the area of the following figures using **function overloading**:
* **Rectangle**
* **Triangle**
* **Square**

**Implementation Notes:**
* Create 3 functions with the same name: `area`.
* Each function is responsible for calculating the area of one specific figure.

---

### 2. Quality Points (Student Evaluation)
Write a function called `qualityPoints` that inputs a student's average and returns a grade point value based on the following ranges:

   | Average Range | Returned Quality Point |
   | :--- | :--- |
   | 90 – 100 | 4 |
   | 80 – 89 | 3 |
   | 70 – 79 | 2 |
   | 60 – 69 | 1 |
   | Lower than 60 | 0 |

---

### 3. Maximum and Minimum (Function Templates)
Write a program that utilizes **function templates** to determine the larger and smaller of two arguments.

* **Functions:** Implement templates called `maximum` and `minimum`.
* **Testing:** The program must test these templates using the following argument types:
    * Integers
    * Characters
    * Floating-point numbers

---

## Lab 08

### 1. Write a program with the two functions specified below, each of which simply **triples** the variable `count` defined in `main`.

    a) tripleByValue
    - Passes a copy of count by value  
    - Triples the copy  
    - Returns the new value  

    b) tripleByReference
    - Passes count by reference using a reference parameter  
    - Triples the original value of count  

---

### 2. Create a function that takes a **range of numbers** and returns the **sum of the digits** among the first and last number in the range.

**Example:**

    
    digitsSum(1, 11) ➞ 48

---

### 3. Find G.C.D for two integers using recursion

---

## Lab 09

### 1. Write a function that returns the **sum of all elements strictly greater than 10** in a given array.

Do **not** include elements equal to 10.

**Example:**

    sumTen([1, 5, 10, 30, 4, 9, 18]) ➞ 48

---

### 2. Create a function that takes an array of numbers and **sorts it in ascending order** (smallest to biggest).

**Example:**

    sortNums([1, 2, 10, 50, 5]) ➞ [1, 2, 5, 10, 50]

---

### 3. Who Is Currently Winning?

You are given an array of scores:

- **Even-indexed values** represent **your scores (Y)**
- **Odd-indexed values** represent **your opponent's scores (O)**

Create a function that returns an array indicating **who is winning at each turn**.

**Rules**

    - Compare cumulative scores after each turn
    - "Y" if you are winning
    - "O" if your opponent is winning

**Example:**

   - [5, 10, 18, 30, 15, 40, 60, 14, 12, 10]
   - Y scores: [5, 18, 15, 60, 12]
   - O scores: [10, 30, 40, 14, 10]

---

## Lab 10

1. Write a function that inputs sides of rectangle from the keyboard to calculate area of a rectangle using pointers.

2. Write a function that inputs two strings from the keyboard to swap them using pointers. 

3. Write a program to dynamically allocate an integer, a character and a string, assign a value to them and print out their values.
(Hint: use new and delete operators to declare variables)

---

## Lab 11

1. Write a program to demonstrate how an array can be passed to a function using pointers. The function should take the array and its size as arguments and return the largest element in the array.

2. Write a program that dynamically allocates memory for an array of integers using new operator. The program should take n elements as input by user and calculate the average of the elements using a pointer.

3. Write a C++ program that demonstrates how to access and modify elements of a 2D array using pointers. The program should change the value of an element and print the modified array.

---

## Lab 12

### 1. Real Estate Management System

Objective
- Design a **Real Estate Management System** using **OOP** in C++.

Task
- Implement a class `Property` with:

Data Members
- `propertyId` (int)  
- `propertyName` (string)  
- `propertyValue` (int)  

Member Functions
- `getPropertyId()`, `setPropertyId()`  
- `getPropertyName()`, `setPropertyName()`  
- `getPropertyValue()`, `setPropertyValue()`  

> Set functions must validate the data (e.g., positive ID, non-empty name, non-negative value).  

Requirements
- Use **private members** with getters and setters.  
- Ensure **data validation** in setters.

---

## Lab 13

### 1. Library Management System

### Objective:
- You need to design a system that allows: Adding books to the library. Displaying book details. Keeping track of the number of books for each book object individually.

### Requirements:
1.	Define a class Book with the following attributes:  bookID (int), title (string), author (string), price (float).
2.	Define the default constructor that initializes the attributes with default values like bookID = 0, title = "Unknown", author = "Unknown", and price = 0.0.
3.	Define Parameterized Constructor that Initializes book details. (bookID, title, author, price).
4.	Define Copy Constructor that it takes book details from existing object.
5.	Define Destructor: Display a message when a book is deleted. (“The book is deleted”)
6.	Define Display( ): Shows book details. (bookID, title, author, price).
7.	Create multiple Book objects with different details.

---

## Lab 14

### 1. Automated Teller Machine (ATM)

### Objective:
- The system should simulate an ATM by managing user account details, handling balance inquiries and transactions, and displaying user information using class composition.

### **Tasks**
1.	Define a classes ATM, Account and Balance.
2.	ATM is using objects of class Account and Balance as members. Class ATM has a composition relationship with class Account and Balance. 
3.	Private members of class Account: BankCard(int), AccountName (string) and PinNumber (int).
- Define Parameterized Constructor that Initializes account details. (BankCard, AccountName, PinNumber).
- Define Display( ): Shows account details.
4.	Private members of class Balance: BalanceInquiry(int), Withdrawal(int) and Deposit(int).
- Define Parameterized Constructor that Initializes account details. (BalanceInquiry ,Withdrawal, Deposit).
- Define Show( ): Shows balance details.
5.	The ATM class should define an Account & Balance object as private members of the ATM class.
- Define Parameterized Constructor that initializes the Account and Balance objects using the parameterized constructors of their respective classes. It initializes: account with card, name, and pin. Balance with withdrawal, deposit, and inquiry.
- Define Parameterized Constructor that initializes the Account and Balance objects using the parameterized constructors of their respective classes. It initializes: account with card, name, and pin. Balance with withdrawal, deposit, and inquiry.
6.	Create three different ATM objects to display user information.

---

## Lab 15

### 1. Stock exchange 

### Objective:
- Develop a system that simulates a stock exchange by managing buying, selling, and limit orders. The system should display live stock prices and market trends using operator overloading.

### **Tasks**
1.	Define a class StockEx.
2.	Declare the following private members:
- currency (string) – Represents the currency name.
- mktrate (float) – Represents the market rate of the currency.
- date (int) – Represents the date of the market rate.
3.	Implement a parameterized constructor to initialize stock exchange details (currency, mktrate, date).
4.	Overload the multiplication operator (*) to exchange currency based on the market rate.
5.	Overload the subtraction operator (-) to calculate the difference between two market rates.
6.	Overload the stream insertion operator (<<) to print stock exchange details.
7.	Overload the stream extraction operator (>>) to take user input for a StockEx object.
8.	Create three different StockEx objects, use overloaded operators (*, -, <<, >>), and display the results.

---

## Lab 16

### 1. Bank Management System

### Objective:
- Extend the Bank Management System by implementing operator overloading in the Account class to enhance its functionality.

### **Tasks**
1. Define Account class.
2. Declare the following private members: 
- AccountName (string) – Represents the client’s name.
- AccountNumber (int) – Represents the client account number.
- type (string) – Represents the type of account.
- Balance(float)- Represents the balance of the amount.
3. Implement a parameterized constructor to initialize account details (AccountName, AccountNumber, type, Balance).
4. Implement functions to deposit and withdraw money from the account:
- deposit() – Adds the amount to the balance.
- withdraw() – Subtracts the amount from the balance.
5. Overload relational operators for the Account class:
- operator(==): To check if two accounts have the same account number.
- operator(>): To check if one account's balance is greater than another account's balance.
6. Overload the stream insertion (<<) and extraction (>>) operators for the Account class:
- Overload operator(<<) to display account details.
- Overload operator(>>) to take user input for an Account object (account name, number, type, balance).
7. Create several Account objects, performing deposit and withdrawal operations, and display account details.

---

## Lab 17

### 1. Student Score System

### Objective:
- Extend the Student Score System by implementing inheritance in the Student class to create classes. Additionally, understand the concepts of public, protected, and private members within the context of inheritance.

### **Tasks**
1. Create Base class:
- Define a class Student.
- Declare the following protected members: ID (int), Name (string), school (string) and GroupNumber(int).
2. Create Derived Classes:
- Define a class Test inheriting from the Student class.
- Define a class Result inheriting from the Test class. 
- Implement constructors for the base and derived classes: Ensure proper initialization of data members in constructors.
- Declare the following protected members for Test class: Physics(int), OOP(int) and English(int) marks.
- Declare the following private members for Result class: 
- Total(int) – Represents the total marks for all subjects.
- GPI(float) – Represents the average mark across all subjects.
- Create display function for Result class.

---

## Lab 18

### 1. University Management System

### Objective:
- The university management wishes to extend its database to include employee and student information. Additionally, understand the concept of polymorphism.

### **Tasks**
1. Create Base class:
- Define a class Person.
- Declare the following protected members: Name(string), Age(int), Gender (char). 
- Create a showData() member function that prints the name, age and gender.
2. Create two classes: Student and Teacher, both inheriting from the Person class.
- Declare the following protected members for Student class: IDnumber (int), subject(string) and grade(int).
- Create a showStudent() member function that prints the IDnumber, subject and grade.
- Declare the following protected members for Teacher class: courseInfo(string).
- Create a showTeacher() member function that prints the courseInfo.
3. Define a class ECLASS that inherits from both the Student and Teacher classes.
- Create a setData() member function that takes name, age and gender as parameters.
- Create a setData() member function that takes IDnumber, subject and grade as parameters.
- Create a setData() member function that takes courseInfo as parameter.
- Create a ShowStudentInfo() member function that prints the name, age, gender, idnumber, subject and grade.
- Create a ShowTeacherInfo() member function that prints the name, age, gender, and courseInfo.

---

## Lab 19

### 1. Hospital Management System

### Objective:
- The hospital management wishes to extend its database to include doctor and patient information. Additionally, understand the concept of run time polymorphism.

### **Tasks**
1. Create Base class:
- Define a class Hospital.
- Declare the following protected members: ID(int), Name(string), Age(int) and Gender (char).
- Implement a parameterized constructor to initialize hospital details (ID, Name, Age, Gender).
- Create a virtual Display() member function that prints the id, name, age and gender.
2. Create two classes: Doctor and Patient, both inheriting from the Hospital class.
- Declare the following private members for Doctor class: department (string), cons_day(string), cons_hours(int) and surgery_day(string).
- Implement a parameterized constructor to initialize doctor details (department, cons_day, cons_hours, surgery_day)
- Create a Display() member function that prints the department, cons_day, cons_hours and surgery_day.
- Declare the following private members for Patient class: med_history(string).
- Implement a parameterized constructor to initialize patient details (med_history).
- Create a Display() member function that prints the med_history.
3. Create several objects with using pointers to a base class to store and display different types of hospital objects. 

Hint: Declare an array of pointers to hospital objects. The array size is 4, as it will hold pointers to two doctors and two patients.

---

## Lab 20

### Topics Covered
- Function templates
- Class templates

### **Tasks**
1. Define a base class Person which includes protected members: Name(string), Age(int) and Gender(char).
- Implement a parameterized constructor to initialize person details (Name, Age and Gender).
- Create a virtual Display() member function that prints the name, age and gender.
2. Define a class template called Student inherit from Person with the following private member variable:
- IDNumber of type T (for roll number of the student)
- Implement a parameterized constructor to initialize student details (IDnumber, Name, Age and Gender).
3. Create a Display() member function that prints the IDnumber ,name, age and gender.
4. Create 4 objects with different data types and display their details using the display() function.

---

## Lab 21

### Topics Covered
- Streams
- Stream output
- Stream input

### **Tasks**
1. Stream Output (Writing to a File):
- Write the each student ID(string), Name(string) and three exam Scores(int) to a text file named "students.txt".(3 different inputs)
- Write the each student ID, Name and Calculate the average of the scores into a new file. (averages.txt).
- Use append mode for the files "students.txt" and "averages.txt".
2. Stream Input (Reading from a File):
- Reading the content of the "students.txt" and "averages.txt" files.
- Display all the information from files to the console.
3. Use proper error checking for file opening and reading. 

Hint: Use member function good().

## Lab 22

### Topics Covered
- File pointers
- Stream manipulators

### **Tasks**
1. Create a Person class that can declare the following protected members: Name(string), Address(string) and PhoneNumber (int).
2.	Write a program that will create a data file containing name, address and telephone numbers of person. (Person.dat)
3. Use a class object to store each set of data. Read the file contents and display it on screen.
4. Write an interactive menu driven program that will access the file created in program and implement the following tasks:
1.	Determine the telephone number of the specified person.
2.	Determine the name if telephone number is known.
3.	Delete a record.
4.	Add a record to a specific position.






















