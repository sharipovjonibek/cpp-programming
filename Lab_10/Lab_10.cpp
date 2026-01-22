#include <iostream>
using namespace std;

// Task 1

int area_rectangle(int* pwidth, int* pheight) {
	return (*pwidth) * (*pheight);
}

// Task 2

string swap(string *pa1, string *pa2) {
	string temp = *pa1;
	*pa1 = *pa2;
	*pa2 = temp;
	return (*pa1 +" "+ * pa2);
}
int main() {

	// Task 1

	int width, height;
	cout << "Enter width of rectangle: "; cin >> width;
	cout << "Enter height of rectangle: "; cin >> height;
	cout << area_rectangle(&width, &height) << endl;

	// Task 2

	string a1 = "OOP";
	string a2 = "Calculus";
	cout << "Before swap is " << a1 << " " << a2 << endl;
	cout << "After swap is " << swap(&a1, &a2) << endl;
	
	// Task 3

	int* a = new int;
	char* b = new char;
	string* c = new string;
	*a = 29;
	*b = 'J';
	*c = "Iphone";
	cout << *a << endl;
	cout << *b << endl;
	cout << *c<< endl;
	delete a;
	delete b;
	delete c;


	return 0;
}