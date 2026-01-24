#include <iostream>
#include "hdr.h"
using namespace std;

int main() {
	
	Book book1(223, "1984", "George Orwell", 4);
	Book book2;
	book2 = book1; // copy
	cout << "book1: " << endl;
	book1.Display();
	cout << endl;
	cout << "book2: " << endl;
	book2.Display();
	Book book3; // empty 
	cout << endl;
	cout << "book3: " << endl;
	book3.Display();
	cout << endl;

	return 0;
}
