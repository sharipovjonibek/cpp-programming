#include <iostream>
#include "hdr.h"
using namespace std;

int main() {
	
	ECLASS Asliddin;
	Asliddin.setData("Asliddin Tursunov", 18, 'F');
	Asliddin.setData(2520, "Calculus", 53);
	Asliddin.ShowStudentInfo();
	cout << endl;
	ECLASS Dokuv;
	Dokuv.setData("Dokuv", 60, 'M');
	Dokuv.setData("Calculus 3");
	Dokuv.ShowTeacherInfo();
	
}
