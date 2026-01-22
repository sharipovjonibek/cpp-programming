#include <iostream>
using namespace std;

int main() {

	// Task 1
	int n = 1;
	int m=1;
	while (n <= 15) {
		if (n % 2==1) {
			m *= n;
		}
		n++;
	}
	cout << "The product of the odd integers from 1 to 15 is " << m << endl;

	// Task 2

	int a, b, p = 0;
	int c;
	cout << "Enter a number: ";
	cin >> a;
	cout << "Enter another smaller number: ";
	cin >> b;
	c = b;
	while (a >= b) {
		p += b;
		b++;
		
	}

	cout << "The sum of all numbers from " << c << " to " << a << " is " << p << endl;

	// Task 3

	int x, y, z;
	cout << "Enter x number: ";
	cin >> x;
	cout << "Enter y number: ";
	cin >> y;
	cout << "Choose one arithmetic operation\n(1.Addition  2.Substruction  3.Multiple  4.Division): ";
	cin >> z;
	switch (z) {
	case 1: cout << x << " + " << y << " = " << x + y << endl; break;
	case 2: cout << x << " - " << y << " = " << x - y << endl; break;
	case 3: cout << x << " * " << y << " = " << x * y << endl; break;
	case 4: cout << x << " / " << y << " = " << x / y << endl; break;
	default: cout << "Error" << endl; break;
	}

	// Task 4

	int k, sum = 0;
	int rem;
	int t = 0;
	cout << "Enter a number: ";
	cin >> k;
	t += k;
	while (k > 0) {
		rem =k % 10;
		sum += rem;
		k /= 10;
	}
	cout << "The sum of disits of " << t << " is " << sum << endl;
	

	return 0;
}
