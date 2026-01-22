#include <iostream>
using namespace std;

// Task 1

void sumTen(int array[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (array[i] > 10) {
			sum += array[i];
		}
	}
	cout << sum << endl;
}

// Task 2

void sortNums(int array[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (array[j] > array[j + 1]) {
				int temp = array[j];
				array[j] = array[j + 1];
				array[j+ 1] = temp;
			}
		}
	}
	cout << "[";
	for (int k = 0; k < n; k++) {
		if (k == n - 1) {
			cout << array[k];
		}
		else {
			cout << array[k] << ",";
		}
	}
	cout << "]" << endl;
}

// Task 3

void winning(int array[], int n) {
	for (int i = 0; i < n; i+=2) {
		if (array[i] > array[i + 1]) {
			cout << "Y" << endl;
		}
		else {
			cout << "O" << endl;
		}
	}
}

int main() {

    // Task 1

	int numbers1[7] = { 1,5,10,30,4,9,18 };
	sumTen(numbers1, 7);
	int numbers2[5] = { 1,2,3,8,5 };
	sumTen(numbers2, 5); 

	// Task 2

	int numbers3[5] = { 1,2,10,50,5 };
	sortNums(numbers3, 5);

	// Task 3

	int scores[10] = { 5,10,18,30,15,40,60,14,12,10 };
	winning(scores, 10);
	

	return 0;
}