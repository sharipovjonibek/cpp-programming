#include <iostream>
using namespace std;

class Person {

protected:
	string Name;
	int Age;
	char Gender;

public:
	void showData() {
		cout << "Name: " << Name << endl;
		cout << "Age: " << Age << endl;
		cout << "Gender: " << Gender << endl;
	}

};

class Student :public virtual Person {

protected:
	int IDnumber;
	string subject;
	int grade;

public:
	void showStudent() {
		cout << "IDnumber: " << IDnumber << endl;
		cout << "subject: " << subject << endl;
		cout << "grade: " << grade << endl;
	}
};

class Teacher : public virtual Person {

protected:
	string courseInfo;
public:

	void showTeacher() {
		cout << "courseInfo: " << courseInfo << endl;
	}
};

class ECLASS :public Student, public Teacher {

public:

	void setData(string name, int age, char gender) {
		Name = name;
		Age = age;
		Gender = gender;
	}
	void setData(int id, string sub, int gr) {
		IDnumber = id;
		subject = sub;
		grade = gr;
	}
	void setData(string course) {
		courseInfo = course;
	}
	void ShowStudentInfo() {
		showData();
		showStudent();
	}
	void ShowTeacherInfo() {
		showData();
		showTeacher();
	}
	
};
