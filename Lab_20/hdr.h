#include <iostream>
using namespace std;

class Person {

protected:
	string Name;
	int Age;
	char Gender;

public:
	Person(string n,int a,char g) {
		Name = n;
		Age = a;
		Gender = g;
	}
	virtual void Display() {
		cout << "Name: " << Name << endl;
		cout << "Age: " << Age << endl;
		cout << "Gender: " << Gender << endl;
	}
};

template<class T>
class Student :public Person {

private:
	T IDNumber;

public:
	Student(string n, int a, char g, T id) :Person(n, a, g) {
		IDNumber = id;
	}
	void Display() {
		Person::Display();
		cout << "IDNumber: " << IDNumber << endl;
	}
	
};
