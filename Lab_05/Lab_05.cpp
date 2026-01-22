#include <iostream>
using namespace std;

int main() {
	// Task 1

	int counter;
	int number;
	int largest = 0;
	for (int counter = 1; counter <= 10; counter++) {
		cout << "Enter a number " << counter << " : "; cin >> number;
		if (number > largest)
			largest = number;
	}
	cout << "The largest is " << largest << endl;
	
	// Task 2

	for (int n = 1; n < 6; n++)
		cout << n <<"\t" << 10 * n <<"\t"<< 100 * n<<"\t" << 1000 * n << endl;

	// Task 3

	int x = 5;
	for (int y = 1; y <= 5; y++) {
		for (int j = 1; j <= y; j++) {
			cout << "*";
		}
		cout << endl;
	}

    // Task 4

	int i = 5;
	for (int z = 1; z <= i; z++) {
		for (int k = 1; k <= (i - z); k++) {
			cout << " ";
		}
		for (int a = 1; a <= z; a++) {
				cout << a;
			}
		
		cout << endl;
    }
	
	return 0;
}
