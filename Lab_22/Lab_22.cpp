#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int MAX = 100;

class Person {
protected:
    string name;
    string address;
    int phone;

public:

    Person() {}
    Person(string n, string a, int p) : name(n), address(a), phone(p) {}

    string getName() const { return name; }
    string getAddress() const { return address; }
    int getPhone() const { return phone; }

    void input() {
        cin.ignore();
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter address: ";
        getline(cin, address);
        cout << "Enter phone number: ";
        cin >> phone;
    }

    void display() const {
        cout << "Name: " << name << ", Address: " << address << ", Phone: " << phone << endl;
    }

    void saveToFile(ofstream& out) const {
        out << name << "," << address << "," << phone << endl;
    }

    static Person fromString(const string& line) {
        size_t pos1 = line.find(',');
        size_t pos2 = line.rfind(',');
        string n = line.substr(0, pos1);
        string a = line.substr(pos1 + 1, pos2 - pos1 - 1);
        int p = stoi(line.substr(pos2 + 1));
        return Person(n, a, p);
    }

    string toLine() const {
        return name + "," + address + "," + to_string(phone);
    }
};

int loadFromFile(Person people[]) {
    ifstream in("Person.txt");
    string line;
    int count = 0;
    while (getline(in, line) && count < MAX) {
        people[count++] = Person::fromString(line);
    }
    in.close();
    return count;
}

void saveToFile(Person people[], int count) {
    ofstream out("Person.txt");
    for (int i = 0; i < count; ++i) {
        out << people[i].toLine() << endl;
    }
    out.close();
}

void addRecord() {
    Person p;
    p.input();
    ofstream out("Person.txt", ios::app);
    p.saveToFile(out);
    out.close();
    cout << "Record added.\n";
}

void displayAllRecords() {
    Person people[MAX];
    int count = loadFromFile(people);
    if (count == 0) {
        cout << "No records found.\n";
        return;
    }
    for (int i = 0; i < count; ++i)
        people[i].display();
}

void findPhoneByName() {
    string name;
    cin.ignore();
    cout << "Enter name: ";
    getline(cin, name);
    Person people[MAX];
    int count = loadFromFile(people);
    for (int i = 0; i < count; ++i) {
        if (people[i].getName() == name) {
            cout << "Phone number: " << people[i].getPhone() << endl;
            return;
        }
    }
    cout << "Name not found.\n";
}

void findNameByPhone() {
    int phone;
    cout << "Enter phone number: ";
    cin >> phone;
    Person people[MAX];
    int count = loadFromFile(people);
    for (int i = 0; i < count; ++i) {
        if (people[i].getPhone() == phone) {
            cout << "Name: " << people[i].getName() << endl;
            return;
        }
    }
    cout << "Phone number not found.\n";
}

void deleteRecord() {
    string name;
    cin.ignore();
    cout << "Enter name to delete: ";
    getline(cin, name);
    Person people[MAX];
    int count = loadFromFile(people);
    bool found = false;
    for (int i = 0; i < count; ++i) {
        if (people[i].getName() == name) {
            for (int j = i; j < count - 1; ++j)
                people[j] = people[j + 1];
            --count;
            found = true;
            break;
        }
    }
    if (found) {
        saveToFile(people, count);
        cout << "Record deleted.\n";
    }
    else {
        cout << "Name not found.\n";
    }
}

// Menu driven program
int main() {
    
    int choice;
    do {
        cout << "\n===== Person Directory Menu =====" << endl;
        cout << "1. Add Record" << endl;
        cout << "2. Display All Records" << endl;
        cout << "3. Find Phone Number by Name" << endl;
        cout << "4. Find Name by Phone Number" << endl;
        cout << "5. Delete a Record" << endl;
        cout << "6. Exit" << endl;
        cout << "Select an option: ";
        cin >> choice;

        switch (choice) {
        case 1:
            addRecord();
            break;
        case 2:
            displayAllRecords();
            break;
        case 3:
            findPhoneByName();
            break;
        case 4:
            findNameByPhone();
            break;
        case 5:
            deleteRecord();
            break;
        case 6:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid option. Try again.\n";
        }

    } while (choice != 6);

    return 0;
}
