#include <iostream>
using namespace std;

int main() {
// Task 1
	int a, b, c;
	cout << "Enter first number:";
	cin >> a;
	cout << "Enter second number:";
	cin >> b;
	cout << "Enter third number:";
	cin >> c;
	cout<<"The sum of three numbers:"<< a + b + c << endl;
	cout<<"The average of three numbers:"<< (a + b + c) / 3 << endl;
	cout << "The product of three numbers:"<< a * b * c << endl;
	// largest
	if (a > b && b > c)
		cout << "largest of these numbers:" << a << endl;
	if (b > a && a > c)
		cout << "largest of these numbers:" << b << endl;
	if (c > a && a > b)
		cout << "largest of these numbers:" << c << endl;
	// smallest
	if (a > b && b > c)
		cout << "smallest of these numbers:" << c << endl;
	if (a > c && c > b)
		cout << "smallest of these numbers:" << b << endl;
	if (b > c && c > a)
		cout << "smallest of these numbers:" << a << endl;

// Task 2
	cout << "0" << "\t" << pow(0, 2) << "\t" << pow(0, 3) << endl;
	cout << "1"<< "\t" << pow(1,2) << "\t" << pow(1,3) << endl;
	cout << "2"<< "\t" << pow(2,2) << "\t" << pow(2,3) << endl;
	cout << "3"<< "\t" << pow(3,2) << "\t" << pow(3,3) << endl;
	cout << "4" << "\t" << pow(4, 2) << "\t" << pow(4, 3) << endl;
	cout << "5"<< "\t" << pow(5,2) << "\t" << pow(5,3)<< endl;
	cout << "6"<< "\t" << pow(6,2) << "\t" << pow(6,3) << endl;
	cout << "7"<< "\t" << pow(7,2) << "\t" << pow(7,3) << endl;
	cout << "8"<< "\t" << pow(8,2) << "\t" << pow(8,3) << endl;
	cout << "9"<< "\t" << pow(9,2) << "\t" << pow(9,3) << endl;
	cout << "10" <<"\t"<< pow(10, 2) << "\t" << pow(10, 3) << endl;
	//Task 3
	int x, y, z;
	cout << "Enter total km driven per day:";
	cin >> x;
	cout << "Enter cost per liter of gasoline:";
	cin >> y;
	cout << "Enter average km per liter:";
	cin >> z;
	int total = (x / z) * y;
	cout << "total cost per day" << total << endl;


	return 0;
}