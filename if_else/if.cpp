#include <iostream>
using namespace std;

int main()
{
  int num; // Variable to store the number

  // Ask the user to enter a number
  cout << "Enter a number: ";
  cin >> num;

  // Check if the number is positive or negative
  if (num >= 0)
  {
    cout << "The number is positive." << endl;
  }
  else
  {
    cout << "The number is negative." << endl;
  }

  return 0;
}
