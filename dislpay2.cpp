#include <iostream>
using namespace std;

// Global variables
int rollNo;
string name;
float marks;

// Function to input student details
void inputStudent() {
    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Marks: ";
    cin >> marks;
}

// Function to display student details
void displayStudent() {
    cout << "\nStudent Details";
    cout << "\nRoll Number: " << rollNo;
    cout << "\nName: " << name;
    cout << "\nMarks: " << marks;
}

int main() {
    inputStudent();
    displayStudent();

    return 0;
}