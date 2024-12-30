#include <iostream>
using namespace std;

int main()
{
  int num; // Variable to store the number

  // Ask the user to enter a number
  cout << "Enter a number: ";
  cin >> num;

  // Check if the number is even or odd
  if (num % 2 == 0)
  {
    cout << "The number is even." << endl;
  }
  else
  {
    cout << "The number is odd." << endl;
  }

  return 0;
}
