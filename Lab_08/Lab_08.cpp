#include <iostream>
using namespace std;

// Task 1

void tripleByValue(int x) {
	x *= 3;
	cout << "Before tripleByValue is " << x << endl;
}
void tripleByReference(int &x) {
	x *= 3;
	cout << "Before tripleByReference is " << x<< endl;
}

// Task 2

void digitSum(int a, int b) {
	int sum = 0;
	int d;
	if (a < b) {
		d = a;
		a = b;
		b = d;
	}
	while (a >= b) {
		int c = b;
		while (c > 0) {
			int r1 = c % 10;
			sum += r1;
			c = c / 10;
		}
		b++;
	}
	cout << sum << endl;
}

// Task 3

void GCD(int a, int b) {
	if (b == 0) {
		cout << a << endl;
	}
	else {
		GCD(b, a % b);
	}
}
int main() {

	// Task 1

	int a;
	cout << "Enter a number: "; cin >> a;
	tripleByValue(a);
	cout << "After tripleByValue is " << a << endl;
	tripleByReference(a);
	cout << "After tripleByReference is " << a << endl;

	// Task 2 

	int b, c;
	cout << "Enter first number in the range: "; cin >> b;
	cout << "Enter last number in the range: "; cin >> c;
	cout << "Sum of each digits in the range is "; digitSum(b, c);

	// Task 3 
	
	int d, k;
	cout << "Enter a number: "; cin >> d;
	cout << "Enter another number: "; cin >> k;
	cout << "Greatest common divisor of " << d << " and " << k << " is "; GCD(d, k);


	return 0;
}