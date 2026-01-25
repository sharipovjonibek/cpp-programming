#include <iostream>
using namespace std;

class Account {
private:
	int BankCard;
	string AccountName;
	int PinNumber;
public:
	Account(int a,string b,int c) {
		BankCard = a;
		AccountName = b;
		PinNumber = c;
	}
	//DefaultConstructor
	Account() {}
	void Display() {
		cout << "BankCard: " << BankCard << endl;
		cout << "AccountName: " << AccountName << endl;
		cout << "PinNumber: " << PinNumber << endl;
	}
};

class Balance {
private:
	int BalanceInquiry;
	int Withdrawal;
	int Deposit;
public:
	Balance(int a,int b,int c) {
		BalanceInquiry = a;
		Withdrawal = b;
		Deposit = c;
	}
	//DefaultConstructor
	Balance() {}
	void Show() {
		cout << "BalanceInquiry: " << BalanceInquiry << endl;
		cout << "Withdrawal: " << Withdrawal << endl;
		cout << "Deposit: " << Deposit << endl;
	}
};

class ATM {
	Account acnt;
	Balance blnc;
public:
	ATM(Account a, Balance b) {
		acnt = a;
		blnc = b;
	}
	void Print() {
		cout << "ATM: " << endl;
		acnt.Display();
		blnc.Show();
	}
};