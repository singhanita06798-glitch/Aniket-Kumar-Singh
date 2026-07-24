#include <iostream>
using namespace std;

// Inline function
inline int add(int a, int b)
{
    return a + b;
}

// Function with default arguments
int multiply(int a, int b = 2)
{
    return a * b;
}

// Function overloading
int subtract(int a, int b)
{
    return a - b;
}

double subtract(double a, double b)
{
    return a - b;
}

int main()
{
    int x, y;

    cout << "Enter two integers: ";
    cin >> x >> y;

    // Inline function
    cout << "\nAddition = " << add(x, y) << endl;

    // Default arguments
    cout << "Multiplication (with both values) = " << multiply(x, y) << endl;
    cout << "Multiplication (default second value) = " << multiply(x) << endl;

    // Function overloading
    cout << "Subtraction (int) = " << subtract(x, y) << endl;
    cout << "Subtraction (double) = " << subtract(15.5, 5.2) << endl;

    return 0;
}