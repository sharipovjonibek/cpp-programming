#include <iostream>
using namespace std;

class Student {

protected:
	int ID;
	string Name;
	string school;
	int GroupNumber;
public:

	Student(int i, string N, string s, int G) {
		ID = i;
		Name = N;
		school = s;
		GroupNumber = G;
	}
	Student() {}
};

class Test :public Student {

protected:
	int Physics;
	int OOP;
	int English;

public:
	Test(int i, string N, string s, int G,int a, int b, int c) : Student(i,N,s,G) {
		Physics = a;
		OOP = b;
		English = c;
	}
};

class Result : public Test {

private:
	int Total = Physics + OOP + English;
	float GPA = Total / 3;
	
public:
	Result(int i, string N, string s, int G, int a, int b, int c) : Test(i,N,s,G,a, b, c) {
		Total = Physics + OOP + English;
		GPA = Total / 3;
	}
	void Display() {
		cout << "ID: " << ID << endl;
		cout << "Name: " << Name << endl;
		cout << "school: " << school << endl;
		cout << "GroupNumber: " << GroupNumber << endl;
		cout << "Physics score: " << Physics << endl;
		cout << "OOP score: " << OOP << endl;
		cout << "English score: " << English << endl;
		cout << "Total: " << Total << endl; 
		cout << "GPA: " << GPA << endl;
	}

};