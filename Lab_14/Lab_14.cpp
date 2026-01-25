#include <iostream>
#include"atm.h"

using namespace std;
int main() {
	
	Account acnt1(12122929, "Sharipov Jonibek", 2929);
	Balance blnc1(100000, 20000, 80000);
	ATM BankATM(acnt1, blnc1);
	BankATM.Print();
	cout << endl;
	Account actn2(25251212, "Odilov Avazbek", 1221);
	Balance blnc2(7, 4, 2);
	ATM ATMmachine(actn2, blnc2);
	ATMmachine.Print();
	cout << endl;
	Account actn3(45453333, "Tursunov Asliddin", 0730);
	Balance blnc3(10, 7, 1);
	ATM ATMservice(actn3, blnc3);
	ATMservice.Print();


	return 0;
}