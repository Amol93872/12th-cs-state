#include <iostream>
using namespace std;

// Global variable
int x = 10;

void display()
{
    int x = 20; // Local variable
    cout << "Local x: " << x << endl;
    cout << "Global x: " << ::x << endl; // Using scope resolution operator to access the global variable
}

int main()
{
    display();
    return 0;
}
