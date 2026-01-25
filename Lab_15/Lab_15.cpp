#include <iostream>
#include"hdr.h"
using namespace std;

int main() {

	StockEx obj1("USD", 74, 20250306), obj2("SUM", 12, 20240622), obj3("EUR", 22, 20251212);

	// stream insertion operator 
	cout << "object 1: " << endl;
	cout << obj1 << endl;
	cout << "object 2: " << endl;
	cout << obj2<< endl;
	cout << "object 3: " << endl;
	cout << obj3<< endl;

	// multiplication operator 
	cout << obj1*18<< endl;
	cout << obj2 * 20 << endl;
	cout << obj3 * 11 << endl;
	cout << endl;

	// subtraction operator
	cout << obj1 - obj2 << endl;
	cout << obj3- obj2 << endl;
	cout << obj3 - obj1 << endl;
	cout << endl;
	
	// stream extraction operator 
	cin >> obj1;
	cout << "object 1: " << endl;
	cout << obj1 << endl;
	cin >> obj2;
	cout << "object 2: " << endl;
	cout << obj2<< endl;
	cin >> obj3;
	cout << "object 3: " << endl;
	cout << obj3<< endl;


	return 0;
}