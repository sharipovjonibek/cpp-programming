#include <iostream>
#include <cmath>

using namespace std;

// Task 1
double average_1_10() {
	double sum = 0;
	for (int i = 1; i <= 10; i++) {
		sum += i;
	}
	return sum / 10;
}

// Task 2

int digits_reversed(int n) {
	int rem;
	int sum = 0;
	while (n != 0) {
		rem = n % 10;
		sum=(sum * 10 + rem);
		n = n / 10;
	}
	return sum;
}

// Task 3(a)

double celsius(double n){
	double C= ((n - 32) * 5) / 9;
	return C;
}

// Task3(b)

double fahrenheit(double n) {
	double F = ((n * 9) / 5) + 32;
	return F;
}

// Task3(c)

double fahrenheit_celcius() {
	cout << "celcius" << "\t" << "fahrenheit " << endl;
	for (int a = 0; a <= 100; a++) {
		cout << a << "\t" << fahrenheit(a) << endl;
	}
	cout << "fahrenheit "  << "\t" << "celcius" << endl;
	for (int b = 32; b <= 212; b++) {
		cout << b << "\t" << celsius(b) << endl;
	}
	return 0;
}


int main() {
	cout << "The average of numbers from 1 to 10: " << average_1_10() << endl;
	int n, m;
	int x;
	cout << "Enter a number: "; cin >> n;
	cout << n << " digits reversed is " << digits_reversed(n) << endl;
	cout << "Enter a fahrenheit temperature: "; cin >> m;
	cout << m << " fahrenheit is " << celsius(m) << endl;
	cout << "Enter a celsius temperature: "; cin >> x;
	cout << x << " celsius is " << fahrenheit(x) << endl;
	cout << fahrenheit_celcius() << endl;

	
	return 0;
}