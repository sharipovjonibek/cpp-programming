#include <iostream>
using namespace std;

int main() {
	// Task 1
	int salary;
	cout << "Enter your salary in USD: ";
	cin >> salary;
	if (salary <= 2000) {
		cout << "You don't need to pay tex" << endl;
		cout << "Your income is " << salary << endl;
	}
	else 
	if (2001 <= salary && salary<3000) {
		cout << "You need to pay " << 0.2 * salary << " USD" << endl;
		cout << "Your salary is " << salary * 0.8 <<" USD"<< endl;
	}
	else
	if (3001 <= salary && salary<5000) {
		cout << "You need to pay " << 0.3 * salary << " USD" << endl;
		cout << "Your salary is " << salary * 0.7 <<" USD"<< endl;
	}
	else
	if (salary >= 5000) {
		cout << "You need to pay " << 0.4 * salary << " USD" << endl;
		cout << "Your salary is " << salary * 0.6 <<" USD"<< endl;
	}

	// Task 2
	int n;
	cout << "Enter a number: ";
	cin >> n;
	if (n % 2 == 0)
		cout << n << " is even" << endl;
	else
	if (n % 2 != 0)
		cout << n << " is odd" << endl;
		
	// Task 3
	int hardness,Tensile;
	double Carbon;
	cout << "Enter hardness of steel: ";
	cin >> hardness;
	cout << "Enter Carbon of steel: ";
	cin >> Carbon;
	cout << "Enter Tensile of steel: ";
	cin >> Tensile;
	if (hardness > 50 && Carbon < 0.7 && Tensile>5600)
		cout << "Grade is 10" << endl;
	if (hardness > 50 && Carbon < 0.7 && Tensile < 5600)
		cout << "Grade is 9" << endl;
	if (hardness < 50 && Carbon < 0.7 && Tensile>5600)
		cout << "Grade is 8" << endl;
	if (hardness > 50 && Carbon > 0.7 && Tensile > 5600)
		cout << "Grade is 7" << endl;
	if (hardness > 50 && Carbon > 0.7 && Tensile < 5600)
		cout << "Grade is 6" << endl;
	if (hardness < 50 && Carbon < 0.7 && Tensile<5600)
		cout << "Grade is 6" << endl;
	if (hardness < 50 && Carbon > 0.7 && Tensile>5600)
		cout << "Grade is 6" << endl;
	if (hardness < 50 && Carbon > 0.7 && Tensile < 5600)
		cout << "Grade is 5" << endl;

	return 0;
}