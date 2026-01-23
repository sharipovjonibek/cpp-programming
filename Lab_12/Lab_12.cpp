#include <iostream>
using namespace std;

class Property {

private:

	int propertyId;
	string propertyName;
	int propertyValue;
	
public:

	void setpropertyId(int a) {
		propertyId = a;
	}
	int getpropertyId();
	void setpropertyName(string a) {
		propertyName = a;
	}
	string getpropertyName();
	void setpropertyValue(int a) {
		propertyValue = a;
	}
	int getpropertyValue();
};

int Property::getpropertyId() {
	return propertyId;
}
string	Property::getpropertyName() {
	return propertyName;
}
int Property::getpropertyValue() {
	return propertyValue;
}


int main() {
	
	Property x;
	cout << "The object x: " << endl;
	x.setpropertyId(2410223);
	cout << "The propertyId: " << x.getpropertyId() << endl;
	x.setpropertyName("Jonibek");
	cout << "The propertyName: " << x.getpropertyName() << endl;
	x.setpropertyValue(29);
	cout << "The propertyValue: " << x.getpropertyValue() << endl;


	return 0;
}