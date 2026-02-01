#include <iostream>
using namespace std;

class Account {
private:
    string AccountName;
    int AccountNumber;
    string type;
    float Balance;

public:
    // Parameterized constructor
    Account(string name, int number, string t, float b) {
        AccountName = name;
        AccountNumber = number;
        type = t;
        Balance = b;
    }

    // Deposit
    void deposit(float x) {
        Balance += x;
    }

    // Withdraw
    void withdraw(float x) {
        Balance -= x;
    }

    // ==
    bool operator==(Account& act1) {
        if (AccountNumber == act1.AccountNumber) {
            return true;
        }
        else {
            return false;
        }
    }

    // >
    void operator>(Account& act1) {
        if (Balance > act1.Balance) {
            cout << "Balance of " << AccountName << " is greater than " << act1.AccountName << endl;
        }
        else {
            cout << "Balance of " << act1.AccountName << " is greater than " << AccountName << endl;
        }
    }

    friend void operator<<(ostream& out, Account& act1);
    friend void operator>>(istream& in, Account& act1);
};

void operator>>(istream& in, Account& act1) {
    cout << "Enter AccountName: "; in >> act1.AccountName;
    cout << "Enter AccountNumber: "; in >> act1.AccountNumber;
    cout << "Enter Account type: "; in >> act1.type;
    cout << "Enter Account balance: "; in >> act1.Balance;
}

void operator<<(ostream& out, Account& act1) {
    out << "Enter AccountName: " << act1.AccountName << endl;
    out << "Enter AccountNumber: " << act1.AccountNumber << endl;
    out << "Enter Account type: " << act1.type << endl;
    out << "Enter Account balance: " << act1.Balance << endl;

}

