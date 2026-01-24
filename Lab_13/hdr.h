#include <iostream>
using namespace std;

class Book {

private:

	int bookID;
	string title;
	string author;
	float price;
	
public:

	// Default constructor
	Book() {
		bookID = 0;
		title = "Unknown";
		author = "Unknown";
		price = 0.0;
	}
	// Parameterized constructor
	Book(int x, string y, string z, float t) {
		bookID = x;
		title = y;
		author = z;
		price = t;
	}
	// Copy constructor
	Book(const Book &book2) {
		bookID = book2.bookID;
		title = book2.title;
		author = book2.author;
		price = book2.price;
	}
	~Book() {
		cout << "The book is deleted" << endl;
	}
	void Display();

};

void Book::Display(){
	cout << "BookID: " << bookID << endl;
	cout << "title: " << title << endl;
	cout << "author: " << author << endl;
	cout << "price: " << price <<"$"<< endl;
}
