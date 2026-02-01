#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student {
    string id;
    string name;
    int score1, score2, score3;
};

void writeStudentData() {
    ofstream outFile("students.txt", ios::app);
    ofstream avgFile("averages.txt", ios::app);

    if (!outFile.good() || !avgFile.good()) {
        cerr << "Failed to open files." << endl;
        return;
    }

    for (int i = 0; i < 3; ++i) {
        Student s;
        cout << "Student " << i + 1 << " ID: ";
        cin >> s.id;
        cin.ignore();
        cout << "Name: ";
        getline(cin, s.name);
        cout << "Enter three exam scores: ";
        cin >> s.score1 >> s.score2 >> s.score3;

        outFile << s.id << " " << s.name << " "
            << s.score1 << " " << s.score2 << " " << s.score3 << endl;

        double avg = (s.score1 + s.score2 + s.score3) / 3.0;
        avgFile << s.id << " " << s.name << " Average: " << avg << endl;
    }

    outFile.close();
    avgFile.close();
}

void readStudentData() {
    ifstream inFile("students.txt");
    ifstream avgFile("averages.txt");

    if (!inFile.good() || !avgFile.good()) {
        cerr << "Failed to open files." << endl;
        return;
    }

    string line;

    while (getline(inFile, line)) {
        cout << line << endl;
    }

    while (getline(avgFile, line)) {
        cout << line << endl;
    }

    inFile.close();
    avgFile.close();
}

int main() {
    writeStudentData();
    readStudentData();
    return 0;
}

