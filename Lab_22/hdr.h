#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Person Class
class Person {
protected:
    string Name;
    int Address;
    int PhoneNumber;

public:
    // Getting Data From User
    void getData() {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, Name);
        cout << "Enter Address (numeric value): ";
        cin >> Address;
        cout << "Enter Phone Number: ";
        cin >> PhoneNumber;
    }

    // Displaying Data
    void displayData() const {
        cout << "Name: " << Name << ", Address: " << Address << ", Phone: " << PhoneNumber << endl;
    }

    // Getters
    string getName() const { return Name; }
    int getPhoneNumber() const { return PhoneNumber; }
};

// Adding a New Record
void addRecord() {
    ofstream outFile("Person.dat", ios::binary | ios::app);
    if (!outFile) {
        cout << "Error opening file for writing.\n";
        return;
    }

    Person person;
    person.getData();
    outFile.write(reinterpret_cast<char*>(&person), sizeof(person));

    cout << "Record added successfully.\n";
    outFile.close();
}

// Displaying All Records
void displayAllRecords() {
    ifstream inFile("Person.dat", ios::binary);
    if (!inFile) {
        cout << "Error opening file for reading.\n";
        return;
    }
    Person person;
    cout << "\n--- All Records ---\n";
    while (inFile.read(reinterpret_cast<char*>(&person), sizeof(person))) {
        person.displayData();
    }

    inFile.close();
}

// Find Phone Number By Name
void findPhoneByName() {
    ifstream inFile("Person.dat", ios::binary);
    if (!inFile) {
        cout << "Error opening file for reading.\n";
        return;
    }

    string searchName;
    cout << "Enter name to find phone number: ";
    cin.ignore();
    getline(cin, searchName);

    Person person;
    bool found = false;
    while (inFile.read(reinterpret_cast<char*>(&person), sizeof(person))) {
        if (person.getName() == searchName) {
            cout << "Phone Number: " << person.getPhoneNumber() << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Name not found in the records.\n";
    }

    inFile.close();
}

// Find Name By Phone Number
void findNameByPhone() {
    ifstream inFile("Person.dat", ios::binary);
    if (!inFile) {
        cout << "Error opening file for reading.\n";
        return;
    }

    int searchPhone;
    cout << "Enter phone number to find name: ";
    cin >> searchPhone;

    Person person;
    bool found = false;
    while (inFile.read(reinterpret_cast<char*>(&person), sizeof(person))) {
        if (person.getPhoneNumber() == searchPhone) {
            cout << "Name: " << person.getName() << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Phone number not found in the records.\n";
    }

    inFile.close();
}

// Delete a Record By Name
void deleteRecord() {
    ifstream inFile("Person.dat", ios::binary);
    ofstream tempFile("Temp.dat", ios::binary);
    if (!inFile || !tempFile) {
        cout << "Error opening file.\n";
        return;
    }

    string deleteName;
    cout << "Enter name to delete: ";
    cin.ignore();
    getline(cin, deleteName);

    Person person;
    bool found = false;
    while (inFile.read(reinterpret_cast<char*>(&person), sizeof(person))) {
        if (person.getName() != deleteName) {
            tempFile.write(reinterpret_cast<char*>(&person), sizeof(person));
        }
        else {
            found = true;
        }
    }

    inFile.close();
    tempFile.close();

    remove("Person.dat");
    rename("Temp.dat", "Person.dat");

    if (found)
        cout << "Record deleted successfully.\n";
    else
        cout << "Name not found in the records.\n";
}

// Main menu
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
