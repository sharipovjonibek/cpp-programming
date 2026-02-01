#include <iostream>
using namespace std;

class Hospital {

protected:
	int ID;
	string Name;
	int Age;
	char Gender;

public:
	Hospital(int i,string n,int a,char g) {
		ID = i;
		Name = n;
		Age = a;
		Gender = g;
	}
	Hospital(){}
	virtual void Display() {
		cout << "ID: " << ID << endl;
		cout << "Name: " << Name << endl;
		cout << "Age: " << Age << endl;
		cout << "Gender: " << Gender << endl;
	}
};

class Doctor :public Hospital {

private:
	string department;
	string cons_day;
	int cons_hours;
	string surgery_day;

public:
	Doctor(int i, string n, int a, char g,string d, string cd, int ch, string sd) : Hospital(i,n,a,g) {
		department = d;
		cons_day = cd;
		cons_hours = ch;
		surgery_day = sd;
	}
	void Display() {
		Hospital::Display();
		cout << "Department: " << department << endl;
		cout << "Cons_day: " << cons_day << endl;
		cout << "Cons_hours: " << cons_hours << endl;
		cout << "Surgery_day: " << surgery_day << endl;
	}

};

class Patient :public Hospital {

private:
	string med_history;

public:
	Patient(int i, string n, int a, char g, string mh):Hospital(i,n,a,g) {
		med_history = mh;
	}
	void Display() {
		Hospital::Display();
		cout << "Med_history: " << med_history << endl;
	}
	
};
