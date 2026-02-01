#include <iostream>
#include "hdr.h"
using namespace std;

int main() {

	Doctor dc1(1212, "Asliddin", 18, 'F', "Neurology", "Monday", 3, "Tuesday");
	Doctor dc2(1313, "Avazbek", 22, 'F', "Cardiology", "Friday", 2, "Monday");
	Patient pt1(2323, "Behruz", 33, 'M', " in the case of a patient who underwent bariatric surgery, the patient is likely diagnosed with hyperlipidemia but does not consider ...");
	Patient pt2(4242, "Ozodbek", 35, 'M', "A 35-year-old patient visits the clinic due to persistent lower back pain that has been bothering them for the past two weeks");
	Hospital *hsp1[4];
	hsp1[0] = &dc1;
	hsp1[1] = &dc2;
	hsp1[2] = &pt1;
	hsp1[3] = &pt2;
	cout << "****Hospital 1****" << endl;
	hsp1[0]->Display();
	cout << endl;
	hsp1[1]->Display();
	cout << endl;
	hsp1[2]->Display();
	cout << endl;
	hsp1[3]->Display();

	return 0;
	
}