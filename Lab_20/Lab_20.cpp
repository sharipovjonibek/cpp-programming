#include <iostream>
#include "hdr.h"
using namespace std;

int main() {
	
	Student<int>Asliddin("Asliddin Tursunov", 18, 'F', 272);
	Student<string>Asliddin1("Masturbek", 19, 'M', "U2410223");
	Student<float>Asliddin2("Asliddin", 22, 'F', 23232.5);
	Student<char>Asliddin3("Tursunov", 55, 'M', 'L');

	Asliddin.Display();
	cout << endl;
	Asliddin1.Display();
	cout << endl;
	Asliddin2.Display();
	cout << endl;
	Asliddin3.Display();


	return 0;
}