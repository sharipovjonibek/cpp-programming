//My First Project
#include <iostream>

int main()
{
 // task1: Print "Welcome to IUT"
	std::cout << "******______ Welcome to IUT ______ ******" << std::endl;
// task2: Declaring Varaible and its Value
	int integer = 7;
	double doubleValue = 1.2;
	float floatValue = 7.5;
	char character = 'B';
	std::cout << "INTEGER:" << integer << std::endl;
	std::cout << "DOUBLE:" << doubleValue << std::endl;
	std::cout << "FLOAT:" << floatValue << std::endl;
	std::cout << "CHAR:" << character << std::endl;
		//task3: Write a program to Calculate Area of Square
	int sideOftheSquare = 6;
	int areaOftheSquare = sideOftheSquare * sideOftheSquare;
		std::cout << "Side of the square:" << sideOftheSquare << std::endl;
		std::cout << "Area of the square:" << areaOftheSquare << std::endl;
		return 0;
}