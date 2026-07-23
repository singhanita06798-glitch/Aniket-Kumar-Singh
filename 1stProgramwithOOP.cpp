#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    float marks;

    
    Student(int r=0 , string n="", float m=0)
    {
        rollNo = r;
        name = n;
        marks = m;
    }

    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name    : " << name << endl;
        cout << "Marks   : " << marks << endl;
        cout << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[n];   

    for(int i = 0; i < n; i++)
    {
        int roll;
        string name;
        float marks;

        cout << "Enter details of Student " << i + 1 << endl;

        cout << "Roll No: ";
        cin >> roll;

        cout << "Name: ";
        cin >> name;

        cout << "Marks: ";
        cin >> marks;

        s[i] = Student(roll, name, marks);
    }

    cout << "Student Details:"<<endl;

    for(int i = 0; i < n; i++)
    {
        s[i].display();
    }

    return 0;
}