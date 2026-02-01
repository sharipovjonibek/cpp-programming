#include <iostream>
#include "hdr.h"
using namespace std;

int main() {

	Account act1("Jonibek", 2929, "Student", 40),
		    act2("Asliddin", 1212, "Savings", 100),
		    act3("Avazbek", 1717, "Business", 80);

	// stream insertion
	cout << act1;
	cout << endl;
	cout << act2;
	cout << endl;
	cout << act3;
	cout << endl;

	// >
	act1 > act2;
	act2 > act3;
	cout << endl;

	// ==
	bool same = (act1 == act2);
	cout << same << endl;

	// deposit 
	act3.deposit(20);
	act1.deposit(60);
	act2.deposit(10);
	cout << act1;
	cout << endl;
	cout << act2;
	cout << endl;
	cout << act3;
	cout << endl;

	// withdraw
	act3.withdraw(50);
	act1.withdraw(50);
	act2.withdraw(60);
	cout << act1;
	cout << endl;
	cout << act2;
	cout << endl;
	cout << act3;
	cout << endl;

	// stream extraction
	cin >> act1;
	cout << "Detail: " << endl;
	cout << act1;
	cin >> act2;
	cout << "Detail: " << endl;
	cout << act2;
	cin >> act3;
	cout << "Detail: " << endl;
	cout << act3;


	return 0;
}