#include <iostream>
using namespace std;

int stack_arr[100];
int top = -1;
int n = 100;

void push(int a)
{
    if(top == n - 1)
    {
        cout << "Overflow\n";
    }
    else
    {
        top = top + 1;
        stack_arr[top] = a;
    }
}

void pop()
{
    if(top == -1)
    {
        cout << "Underflow\n";
    }
    else
    {
        cout << stack_arr[top] << " ";
        top = top - 1;
    }
}

void display()
{
    if(top == -1)
    {
        cout << "Stack is empty\n";
    }
    else
    {
        cout << "Stack elements: ";
        for(int i = 0; i<5; i++)
        {
            cout << stack_arr[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int j, x;

    cout << "Push the values in stack:\n";

    for(j = 0; j < 5; j++)
    {
        cin >> x;
        push(x);
    }

    cout << "\nOriginal stack:\n";
    display();

    cout << "\nPopped elements (reverse order): ";

    for(int i = 0; i < 5; i++)
    {
        pop();  
    }

    cout << endl;

    cout << "\nStack after popping:\n";
    display();

    return 0;
}