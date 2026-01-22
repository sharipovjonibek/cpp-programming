#include <iostream>
using namespace std;

// Task 1 

double area(double a, double b) {
	double area = a * b;
	return area;
}
float area(float a, float h) {
	double area = (a * h) / 2;
	return area;
}
double area(double a) {
	double area = pow(a, 2);
	return area;
}

// Task 2

double qualityPoints(double a) {
	if (a >= 90 && a <= 100) {
		return 4;
	}
	else if (a >= 80 && a <= 89) {
		return 3;
	}
	else if (a >= 70 && a <= 79) {
		return 2;
	}
	else if (a >= 60 && a <= 69) {
		return 1;
	}
	else if (a < 60) {
		return 0;
	}
	return 0;

}

// Task 3

template<class T>
T maximum(T a, T b) {
	T maximumvalue = a;
	if (b > a) {
		maximumvalue = b;
	}
	return maximumvalue;
}
template<class T_1>
T_1 minimum(T_1 a, T_1 b) {
	T_1 minimumvalue = a;
	if (a > b) {
		minimumvalue = b;
	}
	return minimumvalue;
}

int main() { 

// Task 1

	double a, b;
	cout << "Enter one side of rectangle: "; cin >> a;
	cout << "Enter another side of rectangle: "; cin >> b;
	cout << "The area of rectangle is " << area(a, b) << endl;
	float x, y;
	cout << "Enter base of traingle: "; cin >> x;
	cout << "Enter height of traingle: "; cin >> y;
	cout << "The area of traingle is " << area(x, y) << endl;
	double c;
	cout << "Enter side of sequare: "; cin >> c;
	cout << "The area of square is: " << area(c) << endl;
	
// Task 2

	int score;
	cout << "Enter average score of students: "; cin >> score;
	cout << qualityPoints(score) << endl;

// Task 3

	int m, n;
	cout << "Enter a number: "; cin >> m;
	cout << "Enter another number: "; cin >> n;
	cout << "The maximumvalue among both: " << maximum(m, n) << endl;
	cout << "The minimumvalue among both: " << minimum(m, n) << endl;
	float m1, n1;
	cout << "Enter a number: "; cin >> m1;
	cout << "Enter another number: "; cin >> n1;
	cout << "The maximumvalue among both: " << maximum(m1,n1) << endl;
	cout << "The minimumvalue among both: " << minimum(m1,n1) << endl;
	char m2, n2;
	cout << "Enter a number: "; cin >> m2;
	cout << "Enter another number: "; cin >> n2;
	cout << "The maximumvalue among both: " << maximum(m2,n2) << endl;
	cout << "The minimumvalue among both: " << minimum(m2,n2)<< endl;
	return 0;
	
}