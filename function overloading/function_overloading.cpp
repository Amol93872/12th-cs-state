// Function overloading is a feature in C++ that allows multiple functions to have the same name but different parameter lists. The compiler differentiates the functions by their signature, which includes the number and types of parameters.
#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b)
{
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c)
{
    return a + b + c;
}

// Function to add two floating-point numbers
float add(float a, float b)
{
    return a + b;
}

int main()
{
    cout << "Addition of two integers: " << add(5, 10) << endl;
    cout << "Addition of three integers: " << add(5, 10, 15) << endl;
    cout << "Addition of two floating-point numbers: " << add(5.5f, 10.5f) << endl;

    return 0;
}
