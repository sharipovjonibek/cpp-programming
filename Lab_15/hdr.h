#include <iostream>
using namespace std;

class StockEx {

private:
	string currency;
	float mktrate;
	int date;
public:
	StockEx(string c, float m, int d) {
		currency = c;
		mktrate = m;
		date = d;
	}

	StockEx() {}
	float operator*(float a) {
		return a * mktrate;
	}

	float operator-(StockEx m) {
		return mktrate - m.mktrate;
	}

	friend ostream& operator<<(ostream& out, StockEx& s) {
		out << "currency: " << s.currency << " mktrate: " << s.mktrate << " date: " << s.date << endl;
		return out;
	}
	
	friend istream& operator>>(istream& in, StockEx& s) {
		cout << "Enter currency: "; cin >> s.currency;
		cout << "Enter mktrate: "; cin >> s.mktrate;
		cout << "Enter date: "; cin >> s.date;
		return in;
	}

	
};

