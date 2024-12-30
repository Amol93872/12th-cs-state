#include <iostream> // Include input/output stream library
using namespace std;

int main()
{
  float num1, num2, num3; // Variables to store three numbers
  float average;          // Variable to store the average

  // Ask the user to enter three numbers
  cout << "Enter the first number: ";
  cin >> num1; // Take input for the first number

  cout << "Enter the second number: ";
  cin >> num2; // Take input for the second number

  cout << "Enter the third number: ";
  cin >> num3; // Take input for the third number

  // Calculate the average
  average = (num1 + num2 + num3) / 3;

  // Display the average
  cout << "The average of the three numbers is: " << average << endl;

  return 0; // End of the program
}
