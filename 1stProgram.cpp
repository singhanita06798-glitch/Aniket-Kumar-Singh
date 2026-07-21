#include <iostream>
using namespace std;

void display(string name, int rollNo, float marks)
{
    cout<<"Name= "<<name;
    cout<<"Roll No.= "<<rollNo;
    cout<<"Mark= "<<marks;
}

int main(){

    string name;
    int rollNo;
    float marks;

    cout<<"Enter name, roll no. & marks : ";

    cin>>name>>rollNo>>marks;


display(name,rollNo,marks);

 return 0;
}
