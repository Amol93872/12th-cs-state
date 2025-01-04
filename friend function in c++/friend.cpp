#include <iostream>
using namespace std;

class Box
{
private:
    int length; // Private member

public:
    // Constructor to initialize the length
    Box(int l) : length(l) {}

    // Friend function declaration
    friend void displayLength(Box b);
};

// Friend function definition
void displayLength(Box b)
{
    // Accessing the private member 'length'
    cout << "The length of the box is: " << b.length << endl;
}

int main()
{
    Box myBox(10); // Create an object of Box with length 10

    // Call the friend function
    displayLength(myBox);

    return 0;
}
