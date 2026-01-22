#include <iostream>

using namespace std;

// Task 1

int max_element_array(int *a,int n) {
	int max = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}

int main() {
	
	// /*
	// // Task 1
	// int a[10] = { 1,2,3,5,11,4,45,6,89,0 };
	// cout << max_element_array(a, 10) << endl; 
	// // Task 2
	// int n;
	// cout << "How many numbers: "; cin >> n;
	// int* a = new int[n];
    // int sum = 0;
	// for (int i = 0; i < n; i++) {
	// 	cout << "Enter " << i + 1 << " number: "; cin >> a[i];
	// 	sum += a[i];
	// }
	// cout << "The average of the elements of array is " << sum / n;
	// delete[] a; 
	// // Task 3
	// int a[3][2]{
	// 	{1,2},
	// 	{3,11},
	// 	{44,10}
	// };
	// cout << "Before modify" << endl;
	// for (int i = 0; i < 3; i++) {
	// 	for (int j = 0; j < 2; j++) {
	// 		cout << a[i][j] << "\t";
	// 	}
	// 	cout << endl;
	// }
	// int* ptemp = &a[1][1];
	// *ptemp = 100;
	// cout << "After modify" << endl;
	// for (int i = 0; i < 3; i++) {
	// 	for (int j = 0; j < 2; j++) {
	// 		cout << a[i][j] << "\t";
	// 	}
	// 	cout << endl;
	// }
	// */


	return 0;
}