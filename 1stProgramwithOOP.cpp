#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int rollNo;
    float marks;

    void display()
    {
        cout<<"nmae : "<<name;
        cout<<"Roll NO : "<<rollNo;
        cout<<"Marks : "<<marks;
    }

};

int main()
{
    Student s1;
    s1.name="Aniket";
    s1.rollNo=195;
    s1.marks=90.5;
    s1.display();

    return 0;
    
}