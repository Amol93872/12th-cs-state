#include <iostream>
using namespace std;

int main()
{
  int num;                 // Variable to store the number
  long long factorial = 1; // Variable to store the factorial result

  // Ask the user to enter a number
  cout << "Enter a number: ";
  cin >> num;

  // For loop to calculate the factorial
  for (int i = 1; i <= num; i++)
  {
    factorial *= i; // Multiply the current factorial value by i
  }

  // Display the result
  cout << "Factorial of " << num << " is: " << factorial << endl;

  return 0; // End of the program
}
