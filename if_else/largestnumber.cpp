#include <iostream>
using namespace std;

int main()
{
  int num1, num2; // Variables to store two numbers

  // Ask the user to enter two numbers
  cout << "Enter the first number: ";
  cin >> num1;

  cout << "Enter the second number: ";
  cin >> num2;

  // Compare the two numbers
  if (num1 > num2)
  {
    cout << "The first number (" << num1 << ") is larger." << endl;
  }
  else if (num2 > num1)
  {
    cout << "The second number (" << num2 << ") is larger." << endl;
  }
  else
  {
    cout << "Both numbers are equal." << endl;
  }

  return 0;
}
