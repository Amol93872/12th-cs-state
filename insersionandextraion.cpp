#include <iostream> // Include the input/output stream library
using namespace std;

int main()
{
  int age;     // Variable to store the user's age
  string name; // Variable to store the user's name

  // Ask the user to enter their name
  cout << "Enter your name: ";
  cin >> name; // Take input for the name (single word input)

  // Ask the user to enter their age
  cout << "Enter your age: ";
  cin >> age; // Take input for the age

  // Display the user's information
  cout << "Hello, " << name << "! You are " << age << " years old." << endl;

  return 0; // End of the program
}
